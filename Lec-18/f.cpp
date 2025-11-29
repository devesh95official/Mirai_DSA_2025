// apko given h ek sorted array,
// print numbers greater than equal to x and less than y

#include <bits/stdc++.h>

using namespace std;



int main() {

    int n, x, y;
    cin >> n >> x >> y;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    auto lbx = lower_bound(v.begin(), v.end(), x);
    auto lby = lower_bound(v.begin(), v.end(), y);
    cout << "lbx points to : " << *lbx << endl;
    cout << "lby points to : " << *lby << endl;
    
    cout << lby - lbx << endl;

    return 0;
}