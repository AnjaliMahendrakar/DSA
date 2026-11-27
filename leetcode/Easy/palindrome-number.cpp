// Problem: Palindrome Number
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/palindrome-number/
// Solved on: 2026-11-27T08:14:57.698Z

class Solution {
public:
    bool isPalindrome(int x) {

        string s = to_string(x);

        int i = 0 ; 
        int j = s.size() - 1;

        while ( i < j ){
            if ( s[i] != s[j]){
                return false ; 
            }
            i ++ ;
            j -- ; 
        }
        return true ; 
        
    }
};