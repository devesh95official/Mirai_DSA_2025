#include <bits/stdc++.h>

using namespace std;



int main() {

    //unordered_multisets in STL

    unordered_multiset<int> s ; //declaration

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s.insert(a);
    }
    //print set
    cout << "Unordered_MultiSet : ";
    for (auto x : s) {
        cout << x << " ";
    }
    // for (auto it = s.begin(); it != s.end(); it++) {
    //     cout << *it << " ";
    // }
    cout << endl;
    //erase
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

    //size
    cout << s.size() << endl;
    return 0;
}