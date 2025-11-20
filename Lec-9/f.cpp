// priority queue

#include <bits/stdc++.h>

using namespace std;



int main() {

    priority_queue <int, vector<int>, greater<int>>pq; // by default min heap
    //input
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        pq.push(a);
    }

    //print
    while (pq.size() > 0) {
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}