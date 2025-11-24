// https://cses.fi/problemset/task/1071

#include <bits/stdc++.h>

using namespace std;



int main() {

    //input
    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        // calc layer
        long long l = max(x, y);

        if (l % 2 == 0) {
            if (y >= x)cout << (l - 1)*(l - 1) + x << endl;
            else cout << l*l - (y - 1) << endl;
        }
        else {
            if (y >= x)cout << l*l - (x - 1) << endl;
            else cout << (l - 1)*(l - 1) + y << endl;
        }
    }

    return 0;
}