/**
 * @brief Префикс-функция
 * Скорость: O(n)
 * Память: O(n)
 * 
 * Префикс-Функция p i-го символа строки S - максимальная возможная длинна равных префиксов строки и суффиксов, заканчивающихся i-ым символом.
 * Например:
 * ABRACADABRA
 * A: p[0] = 0, так как отсутствуют возможные префиксы и суффиксы
 * AB: p[1] = 0 (единственно-возможные Префикс А, суффикс B не равны)
 * ABR: p[2] = 0
 * ABRA: p[3] = 1 (префикс S[0], суффикс S[3])
 * ABRAC: p[4] = 0
 * ABRACA: p[5] = 1
 * ABRACAD: p[6] = 0
 * ABRACADA: p[7] = 1
 * ABRACADAB: p[8] = 2 (перфкис S[0..1] , суффикс S[7..8])
 * ABRACADABR: p[9] = 3 (перфикс S[0..2], суффикс S[7..9])
 * ABRACADABRA: p[10] = 4 (префикс S[0..3], суффикс S[7..10])
 * 
 * @param s строка, к которой генерируется префикс-функция
 * @return std::vector<int> вектор, в который записываются результаты поиска префикс-функции
 */

std::vector<int> prefix_function(std::string s) {
    std::vector<int> p(s.length(), 0);

    for (int i = 1, j = 0; i < s.length(); i++) {0
        if (s[i] == s[j]) {
            p[i] = j + 1;
            j++;
        } else if (j == 0) {
            p[i] = 0;
        } else {
            j = p[j-1];
            i--;
        }

    }

    return p;
}