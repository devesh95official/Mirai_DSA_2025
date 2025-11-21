// lamda functions

#include <bits/stdc++.h>

using namespace std;



int main() {
    //function to print yes
    auto print_yes = [&]()->void{
        cout << "YES\n";
    };


    // call the function
    print_yes();
    print_yes();
    return 0;
}