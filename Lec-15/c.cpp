// https://www.codechef.com/problems/P5HOME

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int ans = 0, i = 3;
        while (n > i)ans += (n - i), i += 2;
        cout << ans << endl;
    }

    return 0;
}