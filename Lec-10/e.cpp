#include <bits/stdc++.h>

using namespace std;



int main() {
    // beware to use recursion

    int c = 10, d = 14;
    // pass by reference
    auto add = [&](int a, int b)->int{

        return a + b + c + d;
    };
    // pass by value
    auto add1 = [ = ](int a, int b)->int{
        return a + b + c + d;
    };
    // No pass
    auto add2 = [](int a, int b)->int{
        return a + b;// we cannot access outside elements here :(
    };

    int a1 = 10, b1 = 20;

    cout << add(a1, b1) << endl;

    return 0;
}