//vector pairs

#include <bits/stdc++.h>

using namespace std;



int main() {

    vector<pair<int, int>> v = {{1, 2}, {2, 3}, {3, 4}};

    for (int i = 0; i < v.size(); i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }
    
    //input
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++) {
        ans.push_back({a[i],i});
    }
    //print
    cout<<"Ans : \n";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i].first << " " << ans[i].second << endl;
    }
    
    //sort vector sort
    sort(ans.begin(),ans.end());
    cout<<"Sorted Ans : \n";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i].first << " " << ans[i].second << endl;
    }
    return 0;
}