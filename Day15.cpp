/*
Day - 15
code - Fill Candies

Chef received NN candies on his birthday. He wants to put these candies in some bags. A bag has KK pockets and each pocket can hold at most MM candies. Find the minimum number of bags Chef needs so that he can put every candy into a bag.

Input Format - 
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of a single line containing three space-separated integers N,K,MN,K,M.

Output Format - 
For each test case, print the minimum number of bags Chef needs so that he can put all the candies in one of the bags.

*/


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,m,o;
	    cin>>n>>k>>m;
	    o = k*m;
	    if(n%o==0){
	        cout<<n/o<<endl;
	    }
	    else{
	        cout<<(n/o)+1<<endl;
	    }
	}
}