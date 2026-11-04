// Problem: Move Zeroes
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/move-zeroes/
// Solved on: 2026-11-04T18:34:57.658Z

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0 ;
        int fast = 0 ;
        int n = nums.size();
        
        while ( fast < n ){
            if ( nums[fast] == 0){
                fast++;
            }
            else {
                if ( fast != slow ){
                    swap(nums[fast] , nums[slow]);
                }
                slow++;
                fast++;
            }
        }
        
    }
};