#include <bits/stdc++.h>

using namespace std;



int main() {

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    cout << v.end() - v.begin() << endl; // prints size
    cout << *(--v.end()) - *v.begin() << endl;
    
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}