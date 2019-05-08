#define FILENAME "a+b" // Defined, if judge system uses custom names for i/o files

#include <bits/stdc++.h> // Includes an entire STL 

using namespace std;         // Escape from std prefixes
using ll = long long;        // Short name for long long
using pii = pair<int, int>;  // Short name for pair<int, int>
using pll = pair<ll, ll>;    // Short name for pair<long long, long long>

#define all(x) (x).begin(), (x).end() // Macro for <Algorithm>'s calls

void solve()
{
    // Code of Solution
}

int main() {

    /**
     * For local test in console you should make a "LOCAL" macro (in clang, flag for gcc, et cetera)
     * 
     */
    #ifndef LOCAL
        #ifdef FILENAME
            freopen(FILENAME ".in", "r", stdin);
            freopen(FILENAME ".out", "w", stdout);
        #else
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
        #endif
    #endif

    solve();
    return 0;
}