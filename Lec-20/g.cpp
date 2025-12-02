// https://codeforces.com/contest/279/problem/B

#include <bits/stdc++.h>

using namespace std;



int main() {

    int n, t;
    cin >> n >> t;

    vector<int> v(n), p(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
        p[i] = sum;
    }

    auto Good = [&](long long m)->bool{
        // number of books jo padhni hai,
        // agar padh sakte ho to true
        // else false , in time t
        for (int i = 0; i < n - (m - 1); i++) {
            int time = 0;
            if (i == 0)time = p[m - 1];
            else time = p[i + m - 1] - p[i - 1];
            if (time <= t)return true;
        }
        return false;
    };

    long long l = 0, r = 1;
    while (Good(r))r *= 2;
    while (l + 1 < r) {
        long long m = l + (r - l) / 2;
        if (Good(m))l = m;
        else r = m;
    }
    // Because l is good [1 1 1 1 0 0 0 0]
    cout << l << endl;

    return 0;
}