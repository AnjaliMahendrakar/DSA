// Problem: Solve Me First
// Platform: hackerrank
// Language: cpp
// Verdict: Accepted
// URL: https://www.hackerrank.com/challenges/solve-me-first/problem?isFullScreen=true
// Solved on: 2026-11-20T05:47:38.427Z

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solveMeFirst(int a, int b) {
   int result = a + b ;
   return result ;
  
}

int main() {
  int num1, num2;
  int sum;
  cin>>num1>>num2;
  sum = solveMeFirst(num1,num2);
  cout<<sum;
  return 0;
}
