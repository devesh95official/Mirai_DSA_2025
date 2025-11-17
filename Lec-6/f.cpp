// count names
// count scores
#include <bits/stdc++.h>

using namespace std;



int main() {

    // map<string, int> mp;

    // int n;
    // cin >> n;

    // for (int i = 0; i < n; i++) {
    //     string a;
    //     cin >> a;
    //     mp[a]++;
    // }

    // //print
    // for (auto x : mp)cout << x.first << " " << x.second << endl;

    map<string, int> mp;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        int score;
        cin >> score;
        mp[a] += score;
    }

    //print
    for (auto x : mp)cout << x.first << " " << x.second << endl;

    return 0;
}