// Problem: Add Digits
// Platform: leetcode
// Rating/Difficulty: Unrated
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/add-digits/
// Solved on: 2026-11-22T18:11:26.163Z

class Solution {
public:
    int addDigits(int num) {
        
        while (num > 9) {

            int sum = 0;

            while (num > 0) {
                int digit = num % 10;
                sum = sum + digit;
                num = num / 10;
            }

            num = sum;
        }

        return num; 
    }
};