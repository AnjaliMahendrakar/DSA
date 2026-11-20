// Problem: Running Sum of 1d Array
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/running-sum-of-1d-array/
// Solved on: 2026-11-20T05:31:04.479Z

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int running_sum = 0 ;
        for ( int i = 0 ; i < nums.size() ; i++){
            running_sum = running_sum + nums[i] ;
            nums[i] = running_sum ;
        }
        return nums ; 
    }
};