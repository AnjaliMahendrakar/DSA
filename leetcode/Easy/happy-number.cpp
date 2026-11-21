// Problem: Happy Number
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/happy-number/
// Solved on: 2026-11-21T06:26:13.501Z

class Solution {
public:
    bool isHappy(int n) {
     unordered_set<int> seen;
        while (n != 1) {

            if (seen.count(n)) {
                return false;
            }

            seen.insert(n);
            int sum = 0 ; 
            while(n > 0 ){
                int digits = n % 10 ; 
                sum += digits * digits;
                n =  n / 10 ;  
                
            }
            n = sum ;
        }
        return true ; 
        

        }
        
    
};