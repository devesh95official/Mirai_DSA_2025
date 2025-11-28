// http://codeforces.com/contest/1366/problem/A

#include <bits/stdc++.h>

using namespace std;

//O(n*log(n))
// not done fully?
int main() {

    int t;
    cin >> t;

    while (t--) {

        int a, b;
        cin >> a >> b;

        // define Good funtion
        auto Good = [&](long long rupees)->bool{
            // maxi kitne rupees a,b use karke
            long long a1 = a, b1 = b;
            if (min(a1, b1) < rupees)return false;
            a1 -= rupees, b1 -= rupees;
            if (a1 + b1 >= rupees)return true;
            return false;
        };

        // O(log(n))
        long long l = -1, r = 1;
        while (Good(r))r *= 2;
        while (l + 1 < r) {
            long long m = l + (r - l) / 2;
            if (Good(m))l = m;
            else r = m;
        }

        cout << l << endl;

    }

    return 0;
}