// kuch log train mai aye kuch utre , har station per esa hua , batao
// maximum kitne log honge train mai kisi bhi samay

#include <bits/stdc++.h>

using namespace std;



int main() {

    int n;
    cin >> n;
    vector<pair<int, int>>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    int ans = 0;
    int curr = 0;

    for (int i = 0; i < n; i++) {
        curr += v[i].first; // aye 
        curr -= v[i].second; // gye
        ans = max(ans, curr); // store it in ans
    }

    cout << ans << endl;

    return 0;
}