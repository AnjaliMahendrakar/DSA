// Problem: Two Sum
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/two-sum/
// Solved on: 2026-11-27T08:35:25.842Z

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for ( int i  = 0 ; i < nums.size() ; i++){
            for ( int j = i + 1 ; j < nums.size() ; j++){
                if ( nums[i] + nums[j] == target ){
                    return {i , j };
                }
            }
        }
        return {} ; 
       
    }
};