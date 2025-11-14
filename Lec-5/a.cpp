// remove duplicates & preserver order

#include <bits/stdc++.h>

using namespace std;



int main() {

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    unordered_set<int> s;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (s.count(v[i]) == 0) {
            ans.push_back(v[i]);
        }
        s.insert(v[i]);
    }
    //print ans
    for (auto x : ans)cout << x << " ";
    return 0;
}