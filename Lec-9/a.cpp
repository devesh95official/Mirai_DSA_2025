// Sort wrt distance from origin

#include <bits/stdc++.h>

using namespace std;

// created a point stucture
struct point {
    int x, y;
};

bool comp(point a, point b) {
    int dist_a = a.x * a.x + a.y * a.y;
    int dist_b = b.x * b.x + b.y * b.y;
    return dist_a < dist_b;
}

int main() {
    int n;
    cin >> n;
    //input
    vector<point> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].x >> v[i].y;
    }

    //sort wrt to custom comp
    sort(v.begin(), v.end(), comp);

    //print
    for (int i = 0; i < n; i++) {
        cout << v[i].x << " " << v[i].y << endl;
    }

    return 0;
}

// //input
// 6
// 1 1
// 1 2
// 12 1
// 9 9
// 11 11
// 10 10

// //output
// 1 1
// 1 2
// 12 1
// 9 9
// 10 10
// 11 11
