/*
Day - 8
Code - Monopoly

There are 44 companies in the markets of Chefland, AA, BB, CC, and DD. This year,

    Company AA made a profit of PP lakh rupees,
    Company BB made a profit of QQ lakh rupees,
    Company CC made a profit of RR lakh rupees,
    Company DD made a profit of SS lakh rupees.

There is said to be a monopoly in the market if the profit made by one company is strictly greater than the sum of profits made by all other companies. Determine if there is a monopoly in the market or not.
Input Format

    The first line of input will contain a single integer TT, denoting the number of test cases.
    The first line and only line of each test case contains four space-separated integers PP, QQ, RR and SS — the profits made by companies AA, BB, CC and DD respectively.

Output Format

For each test case, output YES if there is a monopoly in the market. Otherwise, output NO.

You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int p,q,r,s;
	    cin>>p>>q>>r>>s;
	    
	    int profit = p+q+r+s;
	    
	    if(p > (profit-p) || q > (profit-q) || r > (profit-r) || s > (profit-s)){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}

}