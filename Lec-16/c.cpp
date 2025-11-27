// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B

#include <bits/stdc++.h>

using namespace std;



int main() {

    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    while (k--) {
        int x;
        cin >> x;
        if (x < v[0])cout << "0\n";
        else {
            //binary search
            int l = 0, r = n;
            while (l + 1 < r) {
                int m = (l + r) / 2;
                if (v[m] <= x)l = m;
                else r = m;
            }
            cout << l + 1 << endl;
        }
    }

    return 0;
}