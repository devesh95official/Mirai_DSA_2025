//https://cses.fi/problemset/task/1094

#include <bits/stdc++.h>

using namespace std;



int main() {

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    long long ans = 0;
    for (int i = 1; i < n; i++) {
        if (v[i - 1] > v[i]) {
            ans += v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
    }

    cout << ans << endl;

    return 0;
}