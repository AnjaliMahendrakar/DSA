// Problem: Search Insert Position
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/search-insert-position/
// Solved on: 2026-11-26T10:01:09.902Z

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        for ( int i = 0 ; i < nums.size() ; i ++){
            if ( nums[i] >= target) {
                return i ; 
            }
        }
           
        return nums.size() ;
    }
};