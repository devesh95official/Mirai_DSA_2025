// 3. Auto Correct Suggestion System
// You are given a dictionary of valid words stored beforehand. You will be given several prefix queries.
// For each prefix, print all dictionary words that start with that prefix.
// Requirements:
// • Store all dictionary words in a sorted set.
// • For each prefix, use lower_bound to find the first matching word.
// • Print words until they stop matching the prefix.

#include <bits/stdc++.h>

using namespace std;

// input
// 1
// su

// output
// All Results :
// subject
// substance
// successful
// such
// sudden
// sugar
// suitable
// summer
// sun
// sunny
// support
// sure
// surprise
// Best Result : subject


int main() {
    set<string> sys = {
        "apple",
        "almond",
        "banana",
        "binary",
        "choco",
        "dog",
        "ketchup",
        "notyourtype",
        "oreo",
        "paris",
        "sad", "safe", "sail", "salt", "same", "sand", "save", "say",
        "school", "science", "scissors", "search", "seat", "second", "see",
        "seem", "sell", "send", "sentence", "serve", "seven", "several",
        "shade", "shadow", "shake", "shape", "share", "sharp", "she",
        "sheep", "sheet", "shelf", "shine", "ship", "shirt", "shoe", "shoot",
        "shop", "short", "should", "shoulder", "shout", "show", "sick", "side",
        "signal", "silence", "silly", "silver", "similar", "simple", "single",
        "since", "sing", "sink", "sister", "sit", "six", "size", "skill", "skin",
        "skirt", "sky", "sleep", "slip", "slow", "smoke", "small", "smell",
        "smile", "smoke", "snow", "so", "soap", "sock", "soft", "some",
        "someone", "something", "sometimes", "son", "soon", "sorry", "sound",
        "soup", "south", "space", "speak", "special", "speed", "spell", "spend",
        "spoon", "sport", "spread", "spring", "square", "stamp", "stand", "star",
        "start", "station", "stay", "steal", "steam", "step", "still", "stomach",
        "stone", "stop", "store", "storm", "story", "strange", "street", "strong",
        "struct ure", "student", "study", "stupid", "subject", "substance",
        "successful", "such", "sudden", "sugar", "suitable", "summer", "sun",
        "sunny", "support", "sure", "surprise", "sweet", "swim", "sword",
        "zoo"
    };

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        cout << "All Results :\n";
        for (auto x : sys) {
            int cnt = 0;
            if (x.size() >= word.size()) {
                for (int j = 0; j < word.size(); j++) {
                    if (word[j] == x[j])cnt++;
                }
                if (cnt == word.size())cout << x << endl;
            }
        }
        cout << "Best Result : " << *sys.lower_bound(word) << endl;// O(log(n))
    }

    return 0;
}