#include <bits/stdc++.h>

using namespace std;

// Spiral Matrix 

int main() {

    int n;
    cin >> n;

    int arr[n][n];

    int cnt = 0;

    int curr = 0;

    while (cnt < n * n) {
        for (int i = curr; i < n - curr; i++) {
            arr[curr][i] = ++cnt;
        }
        for (int i = curr + 1; i < n - curr - 1; i++) {
            arr[i][n - 1 - curr] = ++cnt;
        }
        for (int i = n - 1 - curr; i >= curr; i--) {
            if (cnt < n * n)arr[n - 1 - curr][i] = ++cnt;
        }
        for (int i = n - 2 - curr; i >= curr + 1; i--) {
            arr[i][curr] = ++cnt;
        }
        curr++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }


    return 0;
}