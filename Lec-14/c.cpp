// https://cses.fi/problemset/task/1091/

#include <bits/stdc++.h>

using namespace std;



int main() {

    // input
    int n, m;
    cin >> n >> m;

    multiset<int> s;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s.insert(a);
    }

    for (int i = 0; i < m; i++) {
        int b;
        cin >> b; // itne hi de paunga maximum !!
        if (s.size() > 0 && b >= *s.begin()) {
            cout << *(--s.upper_bound(b)) << endl;
            s.erase(--s.upper_bound(b));
        }
        else cout << "-1\n";
    }

    return 0;
}