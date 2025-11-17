// count freq of chars

#include <bits/stdc++.h>

using namespace std;



int main() {

    map<char, int> mp;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        // mp[c] = mp[c] + 1;
        mp[c]++;
    }

    //print
    for (auto x : mp)cout << x.first << " " << x.second << endl;

    // freq of d
    cout << mp['d'] << endl;

    return 0;
}