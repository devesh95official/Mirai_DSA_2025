// https://cses.fi/problemset/task/1092

#include <bits/stdc++.h>

using namespace std;



int main() {

    long long n;
    cin >> n;

    // storing the sum from 1 to n
    long long s = (n * (n + 1) / 2);
    // if sum is odd then no possible way to divide into two equal parts
    if (s % 2 != 0) {
        cout << "NO\n";
        return 0;
    }
    vector<int> a, b;
    long long target = s / 2;

    long long temp = n, sum = 0;
    while (sum + temp <= target) {
        a.push_back(temp); // adding the element in array
        sum += temp;
        temp--; // decreasing the temp
    }
    // need to add the element
    int need = target - sum;
    if (need > 0 && temp >= need) {
        a.push_back(need);
    }
    else if (need > 0) {
        cout << "NO\n";
        return 0;
    }
    // putting rest of the elements in b
    for (int i = 1; i <= temp; i++) {
        if (i != need)b.push_back(i);
    }
    //printing :)
    cout << "YES\n";
    cout << a.size() << endl;
    for (auto x : a)cout << x << " ";
    cout << endl;
    cout << b.size() << endl;
    for (auto x : b)cout << x << " ";
    cout << endl;
    return 0;
}