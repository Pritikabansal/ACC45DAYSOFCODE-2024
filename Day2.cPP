/* Day - 2

Q1. Code - Lucky Seven

Chef considers the number 77 lucky. As a result, he believes that the 77-th letter he sees on a day is his lucky letter of the day.

You are given a string SS of length 1010, denoting the first 1010 letters Chef saw today.
What is Chef's lucky letter?

Input Format -
The only line of input contains a string SS, of length 1010.

Output Format - 
Print a single character: Chef's lucky letter .
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	char s[10];
	cin>>s;
	cout<<s[6];
}

/*
Q2. code - Clear Day

Chef classifies a day to be either rainy, cloudy, or clear.

In a particular week, Chef finds XX days to be rainy and YY days to be cloudy.
Find the number of clear days in the week.

Input Format - 
The first and only line of input will contain two space-separated integers XX and YY, denoting the number of rainy and cloudy days in the week.

Output Format -
Output the number of clear days in the week.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y;
	cin>>x>>y;
	cout<<7-(x+y);
}

/*
Q3. code - Double Rent

Chefina decided to move into Chef's apartment.
Chef was initially paying a rent of XX rupees. Since Chefina is moving in, the owner decided to double the rent.

Find the final rent Chef needs to pay.

Input Format - 
The input consists of a single integer XX, denoting the rent Chef was initially paying.

Output Format - 
Output on a new line, the final rent Chef needs to pay.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	cin>>x;
	cout<<2*x;
}

/*
Q4. code - Saving Taxes

In Chefland, everyone who earns strictly more than YY rupees per year, has to pay a tax to Chef. Chef has allowed a special scheme where you can invest any amount of money and claim exemption for it.

You have earned XX (X>Y)(X>Y) rupees this year. Find the minimum amount of money you have to invest so that you don't have to pay taxes this year.
Input Format - 
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of a single line of input consisting of two space separated integers XX and YY denoting the amount you earned and the amount above which you will have to pay taxes.

Output Format - 
For each test case, output a single integer, denoting the minimum amount you need to invest.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    cout<<x-y<<endl;
	    
	}
}
