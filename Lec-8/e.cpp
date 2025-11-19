// //custom comparator

// #include <bits/stdc++.h>

// using namespace std;

// //comp

// bool comp(string a, string b) {
//     if (a[2] == b[2])return a[3] < b[3];
//     return a[2] > b[2];
// }

// int main() {

//     int n;
//     cin >> n;

//     vector<string>v(n);
//     //input
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     sort(v.begin(), v.end(), comp);
//     //print
//     for (int i = 0; i < n; i++) {
//         cout << v[i] << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

bool comp(int a, int b) {
    return a > b;
}

int main() {

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), comp);

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}