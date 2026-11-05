// Problem: Majority Element
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/majority-element/
// Solved on: 2026-11-05T13:32:01.368Z

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int, int> freq;

        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        for (auto it : freq) {
            if (it.second > nums.size() / 2) {
                return it.first;
            }
        }

        return -1;
    }
};