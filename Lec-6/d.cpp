#include <bits/stdc++.h>

using namespace std;



int main() {
    // declared map
    map<int, vector<int>>mp;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, m;
        cin >> a >> m;
        for (int i1 = 0; i1 < m; i1++) {
            int b;
            cin >> b;
            mp[a].push_back(b);
        }
    }

    //print
    for (auto x : mp) {
        cout << x.first << " ";
        vector<int> t = x.second;
        for (int i = 0; i < t.size() - 1; i++) {
            cout << t[i] << ",";
        }
        cout << t[t.size() - 1];
        cout << endl;
    }

    return 0;
}