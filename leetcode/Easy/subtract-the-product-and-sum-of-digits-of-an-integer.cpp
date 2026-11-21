// Problem: Subtract the Product and Sum of Digits of an Integer
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
// Solved on: 2026-11-21T05:00:42.223Z

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0 ;
        int product = 1 ;
        
        while (n > 0){
        int digit = n % 10 ;
        sum += digit ; 
        product *= digit ; 
        n = n / 10 ; 
              
        }

        int result = product - sum ;
        return result ; 
        
    }
};