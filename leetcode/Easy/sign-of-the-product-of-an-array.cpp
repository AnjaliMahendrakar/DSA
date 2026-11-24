// Problem: Sign of the Product of an Array
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/sign-of-the-product-of-an-array/
// Solved on: 2026-11-24T16:29:49.768Z

class Solution {
public:
    int arraySign(vector<int>& nums) {

        int negative = 0 ; 
        for ( int i = 0 ; i < nums.size() ; i ++){
            if ( nums[i] == 0 ) return 0 ; 
            if (nums[i] < 0 ) {
                negative ++ ; 
            } 
        }
        if ( negative % 2 == 0 ) return 1 ; 
        else return -1 ;

        
    }
};