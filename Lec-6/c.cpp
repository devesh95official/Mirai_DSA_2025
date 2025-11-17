#include <bits/stdc++.h>

using namespace std;



int main() {
    // declared map
    map<int, int>mp;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        // mp.insert({a, b});
        mp[a] = b;
    }
    auto it1 = mp.lower_bound(7);
    cout << "Lower bound of 7 : ";
    if (it1 != mp.end()) {
        cout << it1 -> first << " " << it1 -> second << endl;
    }
    else {
        cout << "Value out of range\n";
    }
    auto it2 = mp.upper_bound(4);
    cout << "upper bound of 4 : ";
    cout << it2 -> first << " " << it2 -> second << endl;

    cout << "Size of Map : " << mp.size() << endl;
    for (auto x : mp) {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}