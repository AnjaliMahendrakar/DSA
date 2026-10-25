// Problem: Staircase
// Platform: hackerrank
// Language: cpp20
// Verdict: Accepted
// URL: https://www.hackerrank.com/challenges/staircase/problem
// Solved on: 2026-10-25T11:41:08.982Z

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void staircase(int n) {
    for (int i = 1 ; i <= n; i ++){
        for (int j = 1 ; j <= n-i; j ++){
        cout << " ";
        }
         for (int j = 1; j<=i ; j++){
            cout << "#";
         }
         cout << "\n";       
    
}
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    staircase(n);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
