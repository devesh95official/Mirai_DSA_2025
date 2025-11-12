#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {

        int w, p, k;
        cin >> w >> p >> k;

        if (w >= k)cout << 2 * k << endl;
        else cout << 2 * w + k - w << endl;
    }

    return 0;
}