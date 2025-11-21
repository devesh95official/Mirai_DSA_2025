// lamda funtion to solve complex problem

#include <bits/stdc++.h>

using namespace std;



int main() {
    //calculator
    int c = 15;
    auto add = [&](int a, int b)->int{
        return a + b;
    };
    auto sub = [&](int a, int b)->int{
        return a - b;
    };
    auto mul = [&](int a, int b)->int{
        return a * b;
    };
    auto div = [&](int a, int b)->int{
        return a / b;
    };

    auto calculate = [&](int a, int b, char op)->void{
        int ans = 0;
        if (op == '+')ans = add(a , b);
        else if (op == '-')ans = sub(a, b);
        else if (op == '*')ans = mul(a, b);
        else ans = div(a, b);
        cout << ans << endl;
    };

    int t;
    cin >> t;
    while (t--) {

        int a, b;
        char c;
        cin >> a >> b >> c;
        calculate(a, b, c);
    }


    return 0;
}