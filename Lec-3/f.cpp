#include <bits/stdc++.h>

using namespace std;



int main() {

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    v.erase(unique(v.begin(), v.end()), v.end());
    cout << v.front() << endl;
    cout << v.back() << endl;
    cout << *v.begin() << endl;
    cout << *(--v.end()) << endl;
    for (auto x : v) {
        cout << x << " ";
    }

    return 0;
}