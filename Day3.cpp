/*
Day - 3
Code - Masterchef finals

Chef has been working hard to compete in MasterChef.
He is ranked XX out of all contestants. However, only 1010 contestants would be selected for the finals.

Check whether Chef made it to the top 1010 or not?

Input Format - 
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of one integers XX — the current rank of Chef.

Output Format - 
For each test case, output on a new line, YES, if Chef made it to the top 1010 and NO otherwise.

Each character of the output may be printed in either uppercase or lowercase. That is, the strings NO, no, nO, and No will be treated as equivalent.

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int x;
	while(t--){
	    cin>>x;
	    if(x<=10)cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}

}