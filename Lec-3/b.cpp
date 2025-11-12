//https://www.codechef.com/problems/P2BAR

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool f = false;
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0')f = true;
            if (f && s[i] == '1')cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}