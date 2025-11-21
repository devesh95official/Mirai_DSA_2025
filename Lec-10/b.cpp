// missing number
//https://cses.fi/problemset/task/1083/
#include <bits/stdc++.h>

using namespace std;

// Value: For a standard 32-bit signed integer, 
// the maximum value is \(2^{31}-1\), which equals 2,147,483,647

int main() {

    long long n;
    cin >> n;
    
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
    }
    //print
    cout << n*(n + 1) / 2 - sum << endl;

    return 0;
}