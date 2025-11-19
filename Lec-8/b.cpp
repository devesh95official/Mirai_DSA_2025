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
        // mp.insert({a, b});
        mp[a] = b;
    }

    cout << "Size of Map : " << mp.size() << endl;
    for (auto x : mp) {
        cout << x.first << " " << x.second << endl;
    }

    //delete
    mp.erase(4); //by key
    mp.erase(mp.begin()); //by iterator
    // mp.clear(); //delete entire data set
    auto it = mp.find(3);
    cout << "Found values : ";
    if (it != mp.end()) {
        cout << it -> first << " " << it -> second << endl;
    }

    cout << "count of 3 : " << mp.count(3) << endl;
    cout << "Size of Map : " << mp.size() << endl;
    for (auto x : mp) {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}