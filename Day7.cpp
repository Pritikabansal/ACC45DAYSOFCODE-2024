/*
Day - 7
Code - Janmansh and Assignments

Janmansh has to submit 33 assignments for Chingari before 1010 pm and he starts to do the assignments at XX pm. Each assignment takes him 11 hour to complete. Can you tell whether he'll be able to complete all assignments on time or not?

Input Format - 
The first line will contain TT - the number of test cases. Then the test cases follow.
The first and only line of each test case contains one integer XX - the time when Janmansh starts doing the assignments.

Output Format - 
For each test case, output Yes if he can complete the assignments on time. Otherwise, output No.

You may print each character of Yes and No in uppercase or lowercase (for example, yes, yEs, YES will be considered identical).

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x>=0 && x<=7) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
}
