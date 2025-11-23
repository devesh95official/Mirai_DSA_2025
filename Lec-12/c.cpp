// https://cses.fi/problemset/task/1642

#include <bits/stdc++.h>

using namespace std;



int main() {

    //input
    int n, target;
    cin >> n >> target;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // vector pair to store index with the element
    // then we will sort acc to element and not loose the index
    vector<pair<int, int>>v(n);
    for (int i = 0; i < n; i++) {
        v[i].first = a[i];
        v[i].second = i + 1;
    }
    //sorted the vector pair O(n*log(n))
    sort(v.begin(), v.end());

    //complexity O(n*n*n)
    for (int i = 0; i < n - 3; i++) {
        for (int j = i + 1; j < n - 2; j++) {
            //two pointers  O(n)
            int l = j + 1, r = n - 1;
            while (l < r) {
                if (v[i].first + v[j].first + v[l].first + v[r].first == target) {
                    cout << v[i].second << " " << v[j].second << " " << v[l].second << " " << v[r].second << endl;
                    return 0;
                }
                else if (v[i].first + v[j].first + v[l].first + v[r].first > target)r--;
                else l++;
            }
        }

    }
    cout << "IMPOSSIBLE\n";

    return 0;
}