// https://www.codechef.com/problems/P4HOME

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;

        if (z >= y)cout << 2 * y << endl;
        else cout << 2 * z << endl;
    }

    return 0;
}