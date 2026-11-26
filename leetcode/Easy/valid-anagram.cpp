// Problem: Valid Anagram
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/valid-anagram/
// Solved on: 2026-11-26T15:58:13.483Z

class Solution {
public:
    bool isAnagram(string s, string t) {

        if ( s.size() != t.size() ){
            return false ;
        }

        int freq[26] = {0};
        for ( int i = 0 ; i < s.size() ; i++){
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        for (int i = 0 ; i < 26 ; i++){
            if ( freq[i]!= 0 ){
            return false ; 
            }
        }
        return true ; 
        
    }
};