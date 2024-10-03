/*
Day - 6
Code - A or B

There are two problems in a contest.

Problem A is worth 500500 points at the start of the contest.
Problem B is worth 10001000 points at the start of the contest.

Once the contest starts, after each minute:

Maximum points of Problem A reduce by 22 points .
Maximum points of Problem B reduce by 44 points.

It is known that Chef requires XX minutes to solve Problem A correctly and YY minutes to solve Problem B correctly.
Find the maximum number of points Chef can score if he optimally decides the order of attempting both the problems.

Input Format - 
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers XX and YY - the time required to solve problems AA and BB in minutes respectively.

Output Format - 
For each test case, output in a single line, the maximum number of points Chef can score if he optimally decides the order of attempting both the problems.

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    
	    int x,y;
	    cin>>x>>y;
	    
	   // A -> B
	   int pa1 = 500 - (x*2);
	   int pb1 = 1000 - ((x+y)*4);
	   int n=pa1+pb1;
	   
	   // B -> A 
	   int pb2 = 1000 - (y*4);
	   int pa2 = 500 -((x+y)*2);
	   int m=pb2+pa2;
	   
	   if((n)>(m)){
	       cout<<n<<endl;
	   }
	   else{
	       cout<<m<<endl;
	   }
	}
}