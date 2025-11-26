// https://cses.fi/problemset/task/1617

#include <bits/stdc++.h>

using namespace std;

// template<class T>
// T power(T base, T exp, T m) {
//     T ans = 1;
//     base %= m;
//     while (exp > 0) {
//         if (exp & 1) ans = (ans * base) % m;
//         exp >>= 1;
//         base = (base * base) % m;
//     }
//     return ans;
// }

int main() {

    long long n;
    cin >> n;
    // cout << power(2ll, n, 1000000007ll);
    cout << pow(2, n) << endl;

    return 0;
}