/*
Q1.
Day - 10
code - 404 Not Found

Chef's website has a specific response mechanism based on the HTTP status code received:
If the response code is 404404, the website will return NOT FOUND.
For any other response code different from 404404, the website will return FOUND.

Given the response code as XX, determine the website response.
Input Format - 
The first and only line of input contains a response code XX.

Output Format - 
Output on a new line NOT FOUND, if the response code is 404404. Otherwise print FOUND.

You may print each character of the string in uppercase or lowercase (for example, the strings FOUND, fouND, FouND, and found will all be treated as identical).

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	cin>>x;
	if(x==404){
	    cout<<"NOT FOUND"<<endl;
	}
	else{
	    cout<<"FOUND"<<endl;
	}
}

/*
Q2.
code - Off By One

You just bought a new calculator, but it seems to have a small problem: all its results have an extra 11 appended to the end.
For example, if you ask it for 3 + 5, it'll print 81, and 4 + 12 will result in 161.

Given AA and BB, can you predict what the calculator will print when you ask it for A+BA+B?
Input Format - 
The first and only line of input will contain two space-separated integers AA and BB.

Output Format - 
Print a single integer: the calculator's output when you enter A+BA+B into it.

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;
	int c = a+b;
	cout<<c<<"1";

}

/*
Q3.
Code - Donation Drive

A blood drive aims to collect NN number of blood donations.
The drive has collected XX donations so far. Find the remaining number of donations needed to reach the target.

Input Format - 
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case contains two space-separated integers NN and XX — the number of required donations and the number of collected donations, respectively.

Output Format - 
For each test case, output on a new line, the remaining number of donations needed to reach the target.
 
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int n,x;
	cin>>n>>x;
	cout<<n-x<<endl;
	}
}

/*
Q4. 
code - IPL Ticket Rush

DAIICT college students want to attend an IPL match.
A total of NN students from the college want to go while only MM tickets are available for the match.
Determine how many students won't be able to book tickets.

Input Format - 
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of two space-separated integers NN and MM — the number of students wants to go and the total number of tickets available, respectively.

Output Format - 
For each test case, output on a new line the number of students who won't be able to book tickets.

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    if((n-m)>=0){
	        cout<<n-m<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	}
}
