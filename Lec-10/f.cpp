// binary search using lamda function to find sqrt

#include <bits/stdc++.h>

using namespace std;



int main() {

    int n;
    cin >> n;

    auto Good = [&](int m)->int{
        if (m * m == n)return 1;
        else if (m * m > n)return 2;
        else return 0;
    };

    auto inc = [](int&a, int&b)->void{
        a = b;
    };

    int l = 1, r = 1e3;
    while (l + 1 < r) {
        int m = l + (r - l) / 2; // same as (l+r)/2 but efficient in edge cases since int overflow
        //cout << m << endl;
        if (Good(m) == 1) {
            cout << m << endl;
            return 0;
        }
        else if (Good(m) == 2)inc(r, m);
        else inc(l, m);
    }

    return 0;
}