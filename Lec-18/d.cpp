// (hard) https://codeforces.com/problemset/problem/670/D1
// (hard) https://codeforces.com/contest/670/problem/D2

#include <bits/stdc++.h>

using namespace std;



int main() {
    // input
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    auto Good = [&](long long num)->bool{
        // num  cookies banane hai, kya ban sakte hai?
        long long k1 = k;
        for (int i = 0; i < n; i++) {
            // kam pad gya
            if (b[i] / a[i] < num) {
                long long kitne = num * a[i] - b[i];
                if (k1 < kitne)return false;
                k1 -= kitne;
            }
        }
        return true;
    };

    long long l = 0, r = 1;
    while (Good(r))r *= 2;
    while (l + 1 < r) {
        long long m = l + (r - l) / 2;
        if (Good(m))l = m;
        else r = m;
    }
    cout << l << endl;
    
    return 0;
}