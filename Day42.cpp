/*
Day - 42
code - Discus Throw

In discus throw, a player is given 3 throws and the throw with the longest distance is regarded as their final score.

You are given the distances for all 3 throws of a player. Determine the final score of the player.

Input Format - 
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, three integers A,B, and C denoting the distances in each throw.

Output Format - 
For each test case, output the final score of the player.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    cout<<max({a,b,c})<<endl;
	}
	return 0;
}