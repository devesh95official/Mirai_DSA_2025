// https://cses.fi/problemset/task/1072

#include <bits/stdc++.h>

using namespace std;



int main() {

    int n;
    cin >> n;

    for (long long i = 1; i <= n; i++) {
        long long total_ways = (i * i) * (i * i - 1) / 2ll;
        long long attacking_ways = 4ll * (i - 1) * (i - 2);
        cout << total_ways - attacking_ways << endl;
    }
    // for (int i = 1; i <= n; i++) {
    //     long long total_ways = (long long)(i * i) * (long long)(i * i - 1ll) / 2ll;
    //     long long attacking_ways = 4ll * (long long)(i - 1ll) * (long long)(i - 2ll);
    //     cout << total_ways - attacking_ways << endl;
    // }

    return 0;
}