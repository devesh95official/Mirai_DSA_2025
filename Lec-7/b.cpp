// 2. Student Marks Database
//  Create a student marks management system using a map.
//  Supported operations:
//  ADD name marks — Add a student's marks.
//  UPDATE name marks — Update a student's marks.
//  REMOVE name — Remove a student's record if it exists.
//  FIND name — Print the student's marks or print “Not found”.
//  PRINT — Print all students and their marks sorted by student name.

#include <bits/stdc++.h>

using namespace std;

// input
// 7
// ADD mayank 80
// ADD ayush 99
// PRINT
// REMOVE ayush
// UPDATE mayank 100
// FIND mayank
// PRINT

// output
// ayush 99
// mayank 80
// 100
// mayank 100

int main() {

    int n;
    cin >> n;

    map<string, int> mp;

    for (int i = 0; i < n; i++) {
        string q;
        cin >> q;
        if (q == "ADD" || q == "UPDATE") {
            string name;
            int marks;
            cin >> name >> marks;
            mp[name] = marks;
        }
        else if (q == "REMOVE") {
            string name;
            cin >> name;
            mp.erase(name);
        }
        else if (q == "FIND") {
            string name;
            cin >> name;
            if (mp.find(name) != mp.end())cout << mp[name] << endl;
            else cout << "Not Found!!";
        }
        else {
            for (auto x : mp) {
                cout << x.first << " " << x.second << endl;
            }
        }
    }

    return 0;
}