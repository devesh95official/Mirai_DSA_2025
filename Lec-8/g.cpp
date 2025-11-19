//https://www.codechef.com/problems/EXMLF1
#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        // vector<pair<int, int>> v(n);
        // for (int i = 0; i < n; i++) {
        //     int d, t;
        //     cin >> d >> t;
        //     v[i].first = d / t;
        //     v[i].second = i + 1;
        // }
        // sort(v.rbegin(), v.rend());
        // int ans = v[0].second;
        // int i = 0;
        // while (i < n && v[i].first == v[0].first){
        //     ans = min(ans, v[i].second),i++;
        // }
        // cout << ans << endl;
        int ans = -1;
        int maxi = 0;
        for (int i = 1; i <= n; i++) {
            int d, t;
            cin >> d >> t;
            if (d / t > maxi)maxi = d / t, ans = i;
        }
        cout << ans << endl;
    }

    return 0;
}

