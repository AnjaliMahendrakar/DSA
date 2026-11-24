// Problem: 1 to n Without Loop
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops3621/1
// Solved on: 2026-11-24T16:45:07.128Z

class Solution {
  public:
    void printTillN(int n) {
        // code here
        if (n == 0 ) return ;
        printTillN( n - 1 ) ;
        cout << n << " " ; 
    }
};