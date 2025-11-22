//https://cses.fi/problemset/task/1069

#include <bits/stdc++.h>

using namespace std;



int main() {

    string s;
    cin >> s;

    int cnt = 1, maxi = 1;
    for (int i = 1; i < (int)s.size(); i++) {
        if (s[i] == s[i - 1])cnt++;
        else maxi = max(maxi, cnt), cnt = 1;
    }
    maxi = max(maxi, cnt);
    // print the maximum repeating number of chars
    cout << maxi << endl;

    return 0;
}