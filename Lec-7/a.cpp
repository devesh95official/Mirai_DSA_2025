
// 1. Print Words in Sorted Order
// You are given a paragraph as a string. Your task is to extract all the words from the paragraph
// and print them in alphabetical order uniquely.
// You must handle the following correctly:
// • Convert the paragraph to lowercase.
// • Remove punctuation such as commas, periods, exclamation marks, and question marks.
// • Consider a word to contain alphabets only.
// Print each unique word on a new line

#include <bits/stdc++.h>

using namespace std;



int main() {
    string s;
    //input the paragraph line
    getline(cin, s);

    //convert para to lowercase
    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }

    set<string> st;
    string word = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ' || s[i] == ',' || s[i] == '!' || s[i] == '?' || s[i] == '.') {
            if (word.size() > 0) st.insert(word);
            word = "";
        }
        else {
            word.push_back(s[i]);
        }
    }
    //print words
    for (auto x : st) {
        cout << x << endl;
    }
    return 0;
}