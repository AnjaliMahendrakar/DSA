// Problem: Find Lucky Integer in an Array
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/find-lucky-integer-in-an-array/
// Solved on: 2026-11-26T09:40:49.078Z

class Solution {
public:
    int findLucky(vector<int>& arr) {

        unordered_map<int , int > freq ;
        for (int i = 0 ; i < arr.size() ; i++){
            freq[arr[i]]++ ; 
        }
         int ans = - 1 ;
        for ( auto it : freq ) {
           
            if (it.first == it.second ){
                
                ans = max(ans , it.first) ; 
            }
        
            
             
        }
        return ans ;
        
        
    }
};