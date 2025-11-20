// STL stack
#include <bits/stdc++.h>

using namespace std;



int main() {

    stack<int> st;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        st.push(a); // O(1)
    }

    cout << "Last Element : " << st.top() << endl;

    st.pop(); // pop out the element from stack

    //print size
    cout << "stack ki size : " << st.size() << endl;

    //print
    while (st.size() > 0) {
        cout << st.top() << endl; // O(1)
        st.pop();  // O(1)
    }

    return 0;
}