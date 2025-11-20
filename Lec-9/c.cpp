// STL queue
#include <bits/stdc++.h>

using namespace std;



int main() {

    queue<int> q;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        q.push(a); // O(1)
    }

    cout << "Last Element : " << q.back() << endl;

    q.pop(); // pop out the element from queue

    //print size
    cout << "queue ki size : " << q.size() << endl;

    //print
    while (q.size() > 0) {
        cout << q.front() << endl; // O(1)
        q.pop();  // O(1)
    }

    return 0;
}