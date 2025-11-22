//https://www.codechef.com/problems/FENCECOL

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

        //store the count of all elements in mp
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[v[i]]++; // increases count of element by 1
        }
        int maxi = 0, cnt = 0;
        for (auto x : mp) {
            if (x.second > cnt) {
                maxi = x.first; // updating maximum key
                cnt = x.second; // updating maximum count
            }
        }
        vector<int> a(n, 1);
        int ans = 0; // how many minutes
        if (cnt > 1 && maxi != 1) {
            ans++;
            for (int i = 0; i < n; i++) {
                a[i] = maxi;
            }
        }
        //count the unequals
        for (int i = 0; i < n; i++) {
            if (a[i] != v[i]) {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}