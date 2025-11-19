#include <bits/stdc++.h>

using namespace std;



int main() {
    // declared unordered_map
    unordered_map<int, int>mp;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        // mp.insert({a, b}); // insert the pairs O(1)
        mp[a] = b;
    }
    //print at specefic key
    cout << "Value at key 3 : " << mp[3] << endl;
    cout << "Value at key 6 : " << mp[6] << endl; // prints 0
    cout << "Value at key 12 : " << mp[12] << endl; // prints 0
    mp[12] = 6009; // update the value
    // print numbers
    cout << "Size of Map : " << mp.size() << endl;
    for (auto x : mp) {
        cout << x.first << " " << x.second << endl;
    }
    // for (auto it = mp.begin(); it != mp.end(); it++) {
    //     cout << it -> first << " " << it -> second << endl;
    // }

    return 0;
}