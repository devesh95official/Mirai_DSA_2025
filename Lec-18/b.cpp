// https://codeforces.com/contest/1476/problem/A

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        auto Good = [&](long long maxi)->bool{
            // array size n and maxi element maxi, bana sakte ho?
            if (n > k && n % k != 0 && maxi <= 1)return false;
            if (maxi * n >= k)return true;
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