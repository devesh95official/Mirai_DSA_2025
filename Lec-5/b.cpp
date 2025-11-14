// check if array contains duplicate

#include <bits/stdc++.h>

using namespace std;



int main() {

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    unordered_set<int> s;
    for (int i = 0; i < n; i++) {
        if (s.count(v[i]) == 1) {
            cout << "Duplicate\n";
            return 0;
        }
        s.insert(v[i]);
    }
    cout << "No Duplicates\n";
    return 0;
}