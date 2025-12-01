// Suppose, there is an array of size N.
// Find number of elements are less than target.
// The array may contain duplicate values.

// for example,

// array = [ 1 , 2 , 3 , 1 , 2 ]

// target = 3

// So answer will be = 4.

#include <bits/stdc++.h>

using namespace std;



int main() {

    int n, target;
    cin >> n >> target;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    auto it = lower_bound(v.begin(), v.end(), target);

    cout << it - v.begin() << endl;

    return 0;
}