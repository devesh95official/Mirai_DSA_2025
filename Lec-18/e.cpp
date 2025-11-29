// lower bound and upper bound

#include <bits/stdc++.h>

using namespace std;



int main() {

    // lb , ub in sets
    set<int> s = {1, 2, 3, 4, 5, 6, 7, 8};
    // prints 4
    cout << *s.lower_bound(4) << endl;
    // prints 5
    cout << *s.upper_bound(4) << endl;
    // other way
    cout << *lower_bound(s.begin(), s.end(), 4) << endl;
    cout << *upper_bound(s.begin(), s.end(), 4) << endl;

    // vector
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
    // equal or greater
    cout << *lower_bound(v.begin(), v.end(), 9) << endl;
    cout << *upper_bound(v.begin(), v.end(), 4) << endl;
    
    return 0;
}