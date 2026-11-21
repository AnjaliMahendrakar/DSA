// Problem: Reverse Integer
// Platform: leetcode
// Rating/Difficulty: Medium
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/reverse-integer/
// Solved on: 2026-11-21T07:15:05.791Z

class Solution {
public:
    int reverse(int x) {

        int rev = 0 ;
        while ( x != 0){
            int digits = x % 10 ; 
            x = x / 10 ; 
            if ( rev > INT_MAX / 10 || 
            (rev == INT_MAX && digits > 7)){
                return 0 ;
            }
            if (rev < INT_MIN / 10 ||
            (rev == INT_MIN && digits < -8)){
                return 0 ;
            }
            rev = rev * 10 + digits ;
        }
        return rev ; 
        
    }
};


