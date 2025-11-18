// 4. Movie Rating System
// Build a rating system to maintain movie ratings.
// Supported operations:
// ADD movie rating — Add a new movie with rating from 1 to 10.
// UPDATE movie rating — Update an existing movie’s rating.
// TOP k — Print the top k movies sorted by rating in descending order.
// Use a map for storing movie ratings and a suitable sorted structure
// for ranking.

#include <bits/stdc++.h>

using namespace std;

// input
// 12
// ADD a 5
// ADD b 6
// ADD c 0
// ADD d 4
// ADD r 1
// ADD z 4
// UPDATE r 0
// UPDATE a 10
// ADD t 9
// ADD s 5
// ADD u 1
// TOP 5

// output
// Top 5 movies :
// a
// t
// b
// s
// z


int main() {

    int n;
    cin >> n;

    map<string, int> mp; // to store {movie,rating}

    for (int i = 0; i < n; i++) {
        string q;
        cin >> q;
        if (q == "ADD" || q == "UPDATE") {
            string movie;
            int rating;
            cin >> movie >> rating;
            mp[movie] = rating;
        }
        else {
            int k;
            cin >> k;

            cout << "Top " << k << " movies :\n";
            //insert mp into vector
            vector<pair<int , string>>v;
            for (auto x : mp)v.push_back({x.second, x.first});
            //sorting in descending order of rating
            auto comp = [&](pair<int, string> a, pair<int, string> b)->bool{
                if (a.first == b.first)return a.second < b.second;
                return a.first > b.first;
            };
            sort(v.begin(), v.end(), comp);
            // print top k results
            for (int j = 0; j < k; j++) {
                cout << v[j].second << endl;
            }
        }
    }
    for (auto x : mp)cout << x.first << " " << x.second << endl;

    return 0;
}