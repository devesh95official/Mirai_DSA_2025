// https://cses.fi/problemset/task/1074

// H/W Trailing Zeros, Coin Piles
#include <bits/stdc++.h>

using namespace std;



int main() {

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end()); // sort

    long long ans = 0, median = v[n / 2];
    for (int i = 0; i < n; i++) {
        ans += abs(v[i] - median);
    }

    cout << ans << endl;

    return 0;
}
