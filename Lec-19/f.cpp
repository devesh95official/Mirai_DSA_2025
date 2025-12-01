// https://codeforces.com/contest/1201/problem/C

#include <bits/stdc++.h>

using namespace std;



int main() {

    long long n, k;
    cin >> n >> k;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    // BSA

    auto Good = [&](long long m)->bool{
        // median pata hai, batao kya ye median possible hai?
        long long cnt = 0;
        for (int i = n / 2; i < n; i++) {
            if (v[i] < m)cnt += (m - v[i]);
        }
        if (cnt > k)return false;
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

    return 0;
}