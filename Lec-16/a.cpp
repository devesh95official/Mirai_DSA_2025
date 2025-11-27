// https://cses.fi/problemset/task/1618

#include <bits/stdc++.h>

using namespace std;



int main() {

    int n;
    cin >> n;

    // n! = num000000.....kitne zeros h last m!
    long long ans = 0, i = 5;
    while (i <= n) {
        ans += n / i;
        i *= 5;
    }
    cout << ans << endl;
    return 0;
}