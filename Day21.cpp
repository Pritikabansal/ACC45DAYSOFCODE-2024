/*
Day - 21
Code - Exams

In Chefland, there are XX schools, and each school has YY students.
The year end results are in and a total of ZZ students passed the exams.

Assuming that all students appeared for the exams, find whether the number of students who passed in Chefland was strictly greater than 50%50%.

Input Format - 
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of three space-separated integers X,Y,X,Y, and ZZ, as mentioned in the statement.

Output Format - 
For each test case, output on a new line, YES, if the total number of students who passed in Chefland was strictly greater than 50%50%, otherwise print NO.

You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int a = x*y;
	    if((a/2)<z){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
}