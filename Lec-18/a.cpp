// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/C

#include <bits/stdc++.h>

using namespace std;



int main() {

    int n, x, y;
    cin >> n >> x >> y;

    auto Good = [&](long long time)->bool{
        // kya itne time me n-1 more copies print kar sakte ho?
        long long tot = time / x + time / y;
        if (tot >= n - 1)return true;
        return false;
    };


    long long l = -1, r = 1e18;
    while (l + 1 < r) {
        long long m = l + (r - l) / 2;
        if (Good(m))r = m;
        else l = m;
    }
    // r = time to print n-1 copies with both printers, and min(x,y) is 1 copy
    cout << r + min(x, y) << endl;

    return 0;
}