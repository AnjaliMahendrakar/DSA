// Problem: How Many Numbers Are Smaller Than the Current Number
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
// Solved on: 2026-11-21T03:53:31.457Z

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result(nums.size());

        for (int i = 0 ; i <nums.size() ; i++){
            int counter = 0 ;
            for (int j = 0 ; j < nums.size() ; j++){
                if (nums[i] > nums[j]){
                    counter++ ;
                }

            }
           result[i] = counter ; 
        }
        return result; 

    
    }
};