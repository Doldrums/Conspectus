---
title: День 3. Radio and GSM
tags: innoctf-junior-2019
---
# Radio
1. Radio Frequency -- are electrical waves.

Sund == air pressure
Radio == electromagnetic waves

Radio spectrum: 30 hz -> 300 GHz
Low freqs - large wave length
High freqs -> smaller wave length
Wave length corellates with antenna length

International Telecommunication Union has a classification of radio frequencies
- VHF -- 100 MHz
- UHF -- 1 GHz
- SHF -- 10 GHz

IEEE 802.11 WiFi is on 2.4 GHz (b, g, n, ac, ax) and on 5 GHz (a, n, ac, ax standarts)

**Software Defined Radio** can be controlled on PC with special software

Hardware for SDR (enough for 2G standarts):
- RTL Dongle (bandwidth - 2.5 - 2.56 MHz, 24-1766 MHz)
- RRL/E4000 Dongle 
- HackRF One (20 Mhz, 1-7250 MHz, has antenna and clock port because of cheap default clock)
- LimeSDR
- Motorola C118

Cheap dongles cannot show full wave of WiFi, only HackRF and better can do it

HackRF able to transmit signal

Using SDR just for radio listening is stupid

### Further readiong
- **Wikipedia**: loads of articles on Radio Frequencies
- [Michael Ossmann's lessons](https://greatscottgadgets.com/sdr/)

# GSM
Telecom documents (2G, 3G, 4G standarts) are bad and hard to implement it yourself, they want you to play
Telecom world is very closed

2G has many security inssuses, 4G is more secured. Main paradigm is "secure through obscurity" and all known vulnerabilities are hard to implement (fake basestation, downgrade attack).

In mobile phone we have
- CPU
- BB chipset
- (U)SIM-card

Standarts:
- 2G
- GPRS
- EDGE(2.7G)
- 3G (UMTS)
- LTE (3.9G)
- 4G (LTE-A)

## Acronyms
- MS -- Mobile Station
- BTS -- Base Transcevier Station
- Um -- Air interface between MS and BTS
- Uplink / DOwnlink
- BSC -- Base station COntroller
- MSC -- Network Swtiching Subsystem
- ARFCN -- Absolutie Radio Frequency CHannel Number

**Frequency Division Multiple Access** *(FDMA)*
**Time DIvision MUltiple Access** *(TDMA)*

Interface beween MS and BTS is assymetric: MS talks uplik to BTS, BTS provide downlink for MS

## Further watching
- Practical Cellphone Spying
- Running your own GSM stack on a phone

## If you have RTL dongle
Install gqrz: `apt install gqrx gr-gsm rtl-sdr kalibrate-rtl`

## Wireshark
It's able to read GSM protocol

# How internet works
httpd -- daemon for http server used under Apache.
For DNS we need DNS hosting and SSL-certificate.

## Difference of server
- Fault-tolerant Power SUpplu Unit
- Fault-tolerant RAID-1 array for data safety
- Remote management
- CPU usually is Xeon or Opteron
- There is popularity increase of ARM

## Enterprise servers
Manufactures: HPE, Dell, IBM, SUperMicro, Fujitsu, DIY

Remote management:
- From console
    - Serial console
    - Java
    - HTML5

DIY server can be made from:
- 500 rub, which is always on
- Raspberry Pi
- Nvidia Jetson Nano Developer Kitv -  