// count freq of each element

#include <bits/stdc++.h>

using namespace std;



int main() {
    //input
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    multiset<int> s;
    for (int i = 0; i < n; i++) {
        s.insert(v[i]);
    }
    
    vector<pair<int, int>>ans;
    set<int> used;
    for (auto x : s) {
        if (!used.count(x))ans.push_back({x, s.count(x)});
        used.insert(x);
    }
    //print ans
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i].first << " " << ans[i].second << endl;
    }
    return 0;
}