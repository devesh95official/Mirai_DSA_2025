// https://cses.fi/problemset/task/1620

#include <bits/stdc++.h>

using namespace std;

//O(n*log(n))

int main() {

    long long n, t;
    cin >> n >> t;

    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i]; // each machine time to make one product
    }

    // define Good funtion
    auto Good = [&](long long time)->bool{
        // time pata hai ab, ye batao ki t products bana sakte hai?
        long long total = 0;
        for (int i = 0; i < n; i++) {
            total += time / v[i];
            if (total >= t)return true;
        }
        return false;
    };

    // O(log(n))
    long long l = 0, r = 1;
    while (!Good(r))r *= 2;
    while (l + 1 < r) {
        long long m = l + (r - l) / 2;
        if (Good(m))r = m;
        else l = m;
    }

    cout << r << endl;

    return 0;
}