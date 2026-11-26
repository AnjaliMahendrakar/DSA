// Problem: Excel Sheet Column Title
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/excel-sheet-column-title/
// Solved on: 2026-11-26T13:56:50.175Z

class Solution {
public:
    string convertToTitle(int columnNumber) {

        string ans = "" ;
        while(columnNumber > 0){
            columnNumber -- ;
            int rem = columnNumber % 26 ;
            char ch = 'A' + rem ; 
            ans += ch ; 
            columnNumber = columnNumber / 26 ; 
        }
        reverse(ans.begin(), ans.end());
        return ans ; 
        
    }
};