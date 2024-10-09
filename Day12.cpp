/*
Day - 12
Code - Who is taller!

Alice and Bob were having an argument about which of them is taller than the other. Charlie got irritated by the argument, and decided to settle the matter once and for all.
Charlie measured the heights of Alice and Bob, and got to know that Alice's height is XX centimeters and Bob's height is YY centimeters. Help Charlie decide who is taller.
It is guaranteed that X≠YX=Y.

Input Format -
The first line of input will contain an integer TT — the number of test cases. The description of TT test cases follows.
The first and only line of each test case contains two integers XX and YY, as described in the problem statement.

Output Format - 
For each test case, output on a new line AA if Alice is taller than Bob, else output BB. The output is case insensitive, i.e, both AA and aa will be accepted as correct answers when Alice is taller.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x<y){
	        cout<<"B"<<endl;
	    }
	    else{
	        cout<<"A"<<endl;
	    }
	}
}