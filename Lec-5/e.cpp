// union of two arrays, sorted , without duplicates

#include <bits/stdc++.h>

using namespace std;



int main() {
    //input
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int>b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    //code
    set<int> ans;
    for (int i = 0; i < n; i++) {
        ans.insert(a[i]);
    }
    for (int i = 0; i < m; i++) {
        ans.insert(b[i]);
    }
    //print ans
    for (auto x : ans)cout << x << " ";
    return 0;
}