// https://cses.fi/problemset/task/1084

#include <bits/stdc++.h>

using namespace std;



int main() {

    // input
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i]; // demand of room
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i]; // room size
    }

    // sort both vectors
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    // two pointers O(n)
    int ans = 0;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] >= b[j] - k && a[i] <= b[j] + k) {
            ans++;
            i++;
            j++;
        }
        else if (a[i] > b[j] + k)j++;
        else i++;
    }
    cout << ans << endl;
    return 0;
}