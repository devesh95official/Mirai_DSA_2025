//https://codeforces.com/contest/1613/problem/C

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        //input
        long long n, h;
        cin >> n >> h;
        vector<long long> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        auto Good = [&](long long k)->bool{
            // k pata hai, ye batao ki dragon marega ki nahi?
            // long long tot = 0;
            // for (int i = 0; i < n; i++) {
            //     if (i == n - 1)tot += k;
            //     else tot += min(k, v[i + 1] - v[i]);
            // }
            long long tot = k;
            for (int i = 0; i < n - 1; i++) {
                tot += min(k, v[i + 1] - v[i]);
            }
            if (tot >= h)return true;
            return false;
        };

        long long l = 0, r = 1;
        while (!Good(r))r *= 2;
        while (l + 1 < r) {
            long long m = l + (r - l) / 2;
            if (Good(m))r = m;
            else l = m;
        }
        cout << r << endl;
    }

    return 0;
}