// Problem: Richest Customer Wealth
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/richest-customer-wealth/
// Solved on: 2026-11-21T02:58:04.081Z

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       int  highest_wealth = 0 ;

        for (int i = 0 ; i < accounts.size() ; i++){
            int  sum_bank = 0 ; 

            for ( int j = 0 ; j < accounts[i].size() ; j++){
                sum_bank = sum_bank + accounts[i][j] ;

            }
            if (sum_bank > highest_wealth ){
                highest_wealth = sum_bank ;
            }
        }
        return highest_wealth ; 
    
        
    }
};