// Problem: Find Greatest Common Divisor of Array
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
// Solved on: 2026-11-24T17:13:15.518Z

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini = nums[0] ; 
        int maxi =  nums[0] ; 

        for ( int i = 1 ; i < nums.size() ; i++){
            if (nums[i] < mini ){
                mini= nums[i] ;
            }
            if ( nums[i] > maxi){
                maxi = nums[i] ;
            }
        }
         return gcd(mini, maxi);
    
        
    }
};