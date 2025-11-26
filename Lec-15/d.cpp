// https://www.codechef.com/problems/P5HOME

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        if (n % 2 == 0)cout << (n - 2)*(n - 2) / 4 << endl;
        else cout << (n - 1)*(n - 3) / 4 << endl;
    }

    return 0;
}