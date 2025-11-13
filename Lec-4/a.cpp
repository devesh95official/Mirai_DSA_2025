#include <bits/stdc++.h>

using namespace std;



int main() {

    //sets in STL

    set<int> s ; //declaration

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s.insert(a);
    }
    //print set
    cout << "Set : ";
    for (auto x : s) {
        cout << x << " ";
    }
    // for (auto it = s.begin(); it != s.end(); it++) {
    //     cout << *it << " ";
    // }
    cout << endl;
    //erase
    s.erase(4); // by number
    s.insert(4);
    auto it = s.begin(); //by iterator
    s.erase(it);
    for (auto x : s) {
        cout << x << " ";
    }
    cout << endl;
    //O(log(n))
    cout << (s.find(16) != s.end()) << endl; // trick to find if number exists in set
    //count of numbers
    cout << s.count(3) << endl;
    cout << s.count(6) << endl;

    // upperbound (just bada element ka iterator)
    cout << "Upper Bound of 4 : ";
    cout << *s.upper_bound(4) << endl;
    // lowerbound (just equal ya bada element ka iterator)
    cout << "Lower Bound of 4 : ";
    cout << *s.lower_bound(4) << endl;

    //size
    cout << s.size() << endl;
    return 0;
}