#include <bits/stdc++.h>

using namespace std;



int main() {

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int>hashTable(10, 0);

    for (int i = 0; i < n; i++) {
        hashTable[v[i]]++;
    }

    for (int i = 0; i < 10; i++) {
        cout << i << " " << hashTable[i] << endl;
    }

    return 0;
}