// https://codeforces.com/edu/course/2/lesson/6/3/practice/contest/285083/problem/C

#include <bits/stdc++.h>

using namespace std;

// input : 6 3
// 2 5 7 11 15 20
// output : 9

int main() {

    //input
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    auto Good = [&](long long m)->bool{
        //mini dis pata hai, ye batao cows ko arrange kar satke hai kya?
        long long dis = 0, cows = k - 1;
        for (int i = 1; i < n; i++) {
            dis += (v[i] - v[i - 1]);
            if (dis >= m)cows--, dis = 0;
        }
        if (cows > 0)return false;
        return true;
    };

    long long l = 1, r = 1;
    while (Good(r))r *= 2;
    while (l + 1 < r) {
        long long m = l + (r - l) / 2;
        if (Good(m))l = m;
        else r = m;
    }
    // Because l is good [1 1 1 1 0 0 0 0]
    cout << l << endl;

    return 0;
}