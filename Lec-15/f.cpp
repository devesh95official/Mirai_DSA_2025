// https://cses.fi/problemset/task/1643

#include <bits/stdc++.h>

using namespace std;

// kadane's algo

int main() {

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    long long sum = 0, ans = -1e18;
    for (int i = 0; i < n; i++) {
        sum = max(sum + v[i], (long long)v[i]);
        ans = max(ans, sum);
    }

    cout << ans << endl;

    return 0;
}