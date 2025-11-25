// https://cses.fi/problemset/task/1629/

#include <bits/stdc++.h>

using namespace std;

int main() {
    //input
    int n;
    cin >> n;

    vector <pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    // sort acc to second ele
    sort(v.begin(), v.end(), 
    [&](pair<int, int> a, pair<int, int>b){return a.second < b.second;});

    int ans = 0, end = 0;
    for (int i = 0; i < n; i++) {
        if (v[i].first >= end) {
            ans++;
            end = v[i].second;
        }
    }
    cout << ans << endl;

    return 0;
}