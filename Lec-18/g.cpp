// tell me count of x with lb up only

#include <bits/stdc++.h>

using namespace std;



int main() {

    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // count  == ub - lb  // log(n)
    cout << upper_bound(v.begin(), v.end(), x) - lower_bound(v.begin(), v.end(), x) << endl;


    return 0;
}