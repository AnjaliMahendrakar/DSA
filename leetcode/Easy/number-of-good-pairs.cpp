// Problem: Number of Good Pairs
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/number-of-good-pairs/
// Solved on: 2026-11-25T03:48:15.711Z

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        int count  = 0 ;
        for ( int i =  0 ; i < nums.size() ; i++){
           for ( int j = i + 1 ; j < nums.size() ; j++ ) {
            if ( nums[i] == nums[j] ){
                
            count ++ ;
           }
            
        }
        }
        return count ; 
        
     
    }
};