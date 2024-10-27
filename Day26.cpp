/*
Day - 26
code - Is the Score Consistent

Chef is watching a football match. The current score is A:B, that is, team 1 has scored A goals and team 2 has scored B goals. Chef wonders if it is possible for the score to become C:D at a later point in the game (i.e. team 1 has scored C goals and team 2 has scored D goals). Can you help Chef by answering his question?

Input Format -
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first line of each test case contains two integers A and B - the intial number of goals team 1 and team 2 have scored respectively.
The second line of each test case contains two integers C and D - the final number of goals team 1 and team 2 must be able to score respectively.

Output Format - 
For each testcase, output POSSIBLE if it is possible for the score to become C:D at a later point in the game, IMPOSSIBLE otherwise.

You may print each character of POSSIBLE and IMPOSSIBLE in uppercase or lowercase (for example, possible, pOSsiBLe, Possible will be considered identical).
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(c<a || d<b){
	        cout<<"IMPOSSIBLE"<<endl;
	    }
	    else{
	        cout<<"POSSIBLE"<<endl;
	    }
	}
}
