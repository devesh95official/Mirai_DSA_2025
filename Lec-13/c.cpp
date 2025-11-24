// https://cses.fi/problemset/task/1090

#include <bits/stdc++.h>

using namespace std;



int main() {

    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // sort to apply to pointers
    sort(v.begin(), v.end());

    int l = 0, r = n - 1, ans = 0;
    while (l <= r) {
        ans++; // used 1 gondola
        if (v[r] + v[l] <= x)l++, r--;
        else r--;
    }

    cout << ans << endl;

    return 0;
}