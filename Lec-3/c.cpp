//prefix sum

#include <bits/stdc++.h>

using namespace std;



int main() {

    int n;
    cin >> n;
    vector<int> v(n), pref(n) , suff(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // int sum = 0;
    // for (int i = 0; i < n; i++) {
    //     sum += v[i];
    //     pref[i] = sum;
    // }

    pref[0] = v[0];
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + v[i];
    }

    cout << "Prefix Sum : ";
    for (int i = 0; i < n; i++) {
        cout << pref[i] << " ";
    }
    cout << endl;

    suff[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suff[i] = suff[i + 1] + v[i];
    }

    cout << "Suffix Sum : ";
    for (int i = 0; i < n; i++) {
        cout << suff[i] << " ";
    }

    return 0;
}