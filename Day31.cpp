/*
Day - 31
code - Reverse The Number
Given an Integer N, write a program to reverse it.

Input -
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output -
For each test case, display the reverse of the given number N, in a new line.
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int t,num;
    cin >> t;
    while(t--){
        cin >> num;
        int rev=0;
        while(num!=0){
            rev=num%10+rev*10;
            num/=10;
        }
        cout << rev <<endl;
    }

    return 0;
}
