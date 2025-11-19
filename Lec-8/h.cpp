//https://www.codechef.com/problems/NO4S
#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int c1 = 0, c2 = 0, c3 = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a == 1)c1++;
            else if (a == 2)c2++;
            else c3++;
        }
        if (c2 > 1)ans += (c2 - 1);
        ans += min(c1, c3);
        cout << ans << endl;
    }

    return 0;
}