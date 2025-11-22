//https://www.codechef.com/problems/P4169

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        //input
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        vector<int> a(n, 0); // stores cnt of set bits in each element
        for (int i = 0; i < n; i++) {
            int cnt = 0, temp = v[i];
            while (temp > 0) {
                if (temp & 1)cnt++;
                temp >>= 1;
            }
            a[i] = cnt;
        }

        map<int, multiset<int>>mp;
        for (int i = 0; i < n; i++)mp[a[i]].insert(v[i]);

        // for (auto x : mp) {
        //     cout << "Key is : " << x.first << "\n";
        //     multiset<int> t = x.second;
        //     for (auto y : t) {
        //         cout << y << " ";
        //     }
        //     cout << endl;
        // }
        // for (int i = 0; i < n; i++) {
        //     int t = *mp[a[i]].begin();
        //     mp[a[i]].erase(mp[a[i]].find(*mp[a[i]].begin()));
        //     a[i] = t;
        // }
        if (is_sorted(a.begin(), a.end()))cout << "YES\n"; // checks if array is sorted
        else cout << "NO\n";
    }

    return 0;
}