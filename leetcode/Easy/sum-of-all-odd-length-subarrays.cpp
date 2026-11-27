// Problem: Sum of All Odd Length Subarrays
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: cpp
// Verdict: Accepted
// URL: https://leetcode.com/problems/sum-of-all-odd-length-subarrays/
// Solved on: 2026-11-27T07:58:55.404Z

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {

        int ans = 0 ; 

        for (int i = 0 ; i < arr.size() ; i++){
            for ( int j = i ; j < arr.size() ; j++){
                int len = j - i + 1;

                if(len % 2 == 1 ){
                    int sum = 0 ; 

                    for (  int k = i ; k <= j ; k++){
                        sum += arr[k] ;
                    }
                    ans += sum ; 


                }
            }
        }  
        return ans ; 

    }
};