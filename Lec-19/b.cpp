// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         auto it = lower_bound(nums.begin(), nums.end(), target);
//         if (it == nums.end())return { -1, -1};
//         if (*it != target)return { -1, -1};
//         int pehli = it - nums.begin();
//         int akhri = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;
//         return {pehli, akhri};
//     }
// };