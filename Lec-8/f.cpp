#include <bits/stdc++.h>

using namespace std;

bool comp(vector<int> a, vector<int> b) {
    if (a[2] == b[2]) {
        if (a[3] == b[3]) {
            if (a[1] == b[1])return a[0] < b[0];
            return a[1] < b[1];
        }
        return a[3] < b[3];
    }
    return a[2] < b[2];
}

int main() {

    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    sort(arr.begin(), arr.end(), comp);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}