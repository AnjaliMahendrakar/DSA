// Problem: Contains Duplicate
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/contains-duplicate/
// Solved on: 2026-11-03T07:52:27.984Z

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> s ;
    for  ( int i = 0 ; i < nums.size() ; i ++){
       if ( s.count(nums[i])) return true ; 

        s.insert(nums[i]);
    }
    return false;

    }
};