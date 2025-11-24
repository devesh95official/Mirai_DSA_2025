// aarav's query
// https://cses.fi/problemset/task/1619

#include <bits/stdc++.h>

using namespace std;



int main() {

    // input
    int n;
    cin >> n;
    
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        mp[a] = 1;
        mp[b] = -1;
    }
    //store cnt and ans
    int ans = 0, cnt = 0;
    for (auto x : mp) {
        cnt += x.second;
        ans = max(ans, cnt);
    }
    //print ans
    cout << ans << endl;

    return 0;
}