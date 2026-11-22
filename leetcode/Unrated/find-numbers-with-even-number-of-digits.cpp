// Problem: Find Numbers with Even Number of Digits
// Platform: leetcode
// Rating/Difficulty: Unrated
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
// Solved on: 2026-11-22T18:11:49.784Z

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size() ; 
        int count = 0 ; 
        for ( int i = 0 ; i < n; i++){
            int counter = 0 ; 
            while (nums[i] > 0 ){
            int digit = nums[i] % 10 ; 
            counter++;
            nums[i] = nums[i] / 10 ;
            }
            if ( counter % 2 == 0 ) count ++ ; 
            


        }
        return count ; 
        
    }
};