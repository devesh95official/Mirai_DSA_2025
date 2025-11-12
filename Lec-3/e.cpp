#include <bits/stdc++.h>

using namespace std;

// l r querySum problem

int main() {

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    // O(n*n)
    // int t;
    // cin >> t;
    // while (t--) {
    //     int l, r;
    //     cin >> l >> r;

    //     int sum = 0;
    //     for (int i = l; i <= r; i++)sum += v[i];
    //     cout << sum << endl;
    // }
    //O(n) - Prefix Sum
    vector<int> pref(n);
    pref[0] = v[0];
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + v[i];
    }
    int t;
    cin >> t;
    while (t--) {
        
        int l, r;
        cin >> l >> r;
        
        if (!l)cout << pref[r] << endl;
        else cout << pref[r] - pref[l - 1] << endl;
        
    }

    return 0;
}