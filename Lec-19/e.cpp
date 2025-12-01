// https://codeforces.com/contest/1873/problem/E


#include <bits/stdc++.h>

using namespace std;



int main() {

    //input
    int t;
    cin >> t;

    while (t--) {
        long long n, x;
        cin >> n >> x;
        vector<long long> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // BSA

        auto Good = [&](long long h)->bool{
            // height pata hai, pani pata hai, ye batao ki tank fill hoga ya nahi?
            long long pani = x;
            for (int i = 0; i < n; i++) {
                if (v[i] < h) { // idher pani bharo
                    if (pani < h - v[i])return false;
                    pani -= (h - v[i]);
                }
            }
            return true;
        };


        long long l = 1, r = 1;
        while (Good(r))r *= 2;

        while (l + 1 < r) {
            long long m = l + (r - l) / 2;
            if (Good(m))l = m;
            else r = m;
        }

        cout << l << endl;
    }

    return 0;
}