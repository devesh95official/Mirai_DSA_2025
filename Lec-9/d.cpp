// dequeue in STL

#include <bits/stdc++.h>

using namespace std;



int main() {

    int n;
    cin >> n;

    deque<int> d(n); // init of deque
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }

    d.push_back(6); // push back element
    d.push_front(7); // insert at begin with O(1)
    // for (int i = 0; i < n; i++) {
    //     cout << d[i] << " ";
    // }
    for (auto x : d) {
        cout << x << " ";
    }
    cout << endl;

    d.pop_front();
    d.pop_front();
    d.pop_back();

    sort(d.begin(), d.end());
    reverse(d.begin(), d.end());
    
    for (auto x : d) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}