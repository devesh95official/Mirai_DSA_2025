//print the winner
#include <bits/stdc++.h>

using namespace std;



int main() {

    map<string, int> mp;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        int score;
        cin >> score;
        mp[a] += score;
    }

    string winner = "";
    int sc = 0;

    for (auto x : mp) {
        if (x.second > sc)winner = x.first, sc = x.second;
    }
   
    cout << winner << endl;

    return 0;
}