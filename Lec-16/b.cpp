// https://cses.fi/problemset/task/1754

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a > b)swap(a, b);
        if ((a + b) % 3 != 0 || 2 * a < b)cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}