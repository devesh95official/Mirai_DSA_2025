////https://leetcode.com/problems/two-sum/description/
#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
        int need = target - nums[i];
        if (mp.find(need) != mp.end())return {mp[need], i};
        mp[nums[i]] = i;
    }
    return {};
}

int main() {

    return 0;
}