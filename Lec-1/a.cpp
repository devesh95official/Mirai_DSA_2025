#include <bits/stdc++.h>

using namespace std;



int main() {

    vector<int> v(7);
    
    cout << sizeof(v) << endl;

    cout << v.size() << " ";
    cout << v.capacity() << endl;

    v.push_back(6);

    cout << v.size() << " ";
    cout << v.capacity() << endl;

    v.push_back(7);
    cout << sizeof(v) << endl;

    cout << v.size() << " ";
    cout << v.capacity() << endl;

    v.push_back(7);

    cout << v.size() << " ";
    cout << v.capacity() << endl;
    v.push_back(7);

    cout << v.size() << " ";
    cout << v.capacity() << endl;
    v.push_back(7);

    cout << v.size() << " ";
    cout << v.capacity() << endl;

    v.push_back(8);


    cout << v.size() << " ";
    cout << v.capacity() << endl;

    v.push_back(8);
    v.push_back(8);

    cout << v.size() << " ";
    cout << v.capacity() << endl;

    v.pop_back();
    cout << v.size() << " ";
    cout << v.capacity() << endl;
    for (auto x : v)cout << x << " ";
    cout << endl;

    cout << sizeof(v) << endl;

    return 0;
}