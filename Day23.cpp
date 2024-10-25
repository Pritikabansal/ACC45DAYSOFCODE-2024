/*
Day - 23
code - Water Filling
Chef has three water bottles. At any point, if at least two of them are empty, she will fill them up. But if at most one bottle is empty, she will wait, and not fill them up now.

You are given three integers - B1,B2, and B3.
If B1=1, it means that the first bottle is full.
If B1=0, it means that the first bottle is empty.
Similarly,B2 denotes whether the second bottle is full or empty, and B3 denotes it for the third bottle.
Output "Water filling time", if Chef has to fill the bottles now. If not, output "Not now".

Input Format - 
The first line of input will contain a single integer T, denoting the number of test cases.
The only line of each test case contains three space-separated integers,B1,B2,B3.

Output Format - 
For each test case, output on a new line, either "Water filling time", or "Not now".
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int b1,b2,b3;
	    cin>>b1>>b2>>b3;
	    int sum = b1+b2+b3;
	    if(sum<=1){
	        cout<<"Water filling time"<<endl;
	    }
	    else{
	        cout<<"Not now"<<endl;
	    }
	}
}

/*
code2 - Minimum Pizzas

Each pizza consists of 4 slices. There are N friends and each friend needs exactly X slices.

Find the minimum number of pizzas they should order to satisfy their appetite.

Input Format -
The first line of input will contain a single integer T, denoting the number of test cases.Each test case consists of two integers N and X, the number of friends and the number of slices each friend wants respectively.

Output Format -
For each test case, output the minimum number of pizzas required.
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
	    int total_slices = n*x;
	    if(total_slices%4>0){
	        cout<<total_slices/4 +1<<endl;
	    }
	    else{
	        cout<<total_slices/4<<endl;
	    }
	}
}