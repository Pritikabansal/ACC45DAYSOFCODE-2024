/*
Day - 43
code - Watching Movies at 2x

Chef started watching a movie that runs for a total of X minutes.
Chef has decided to watch the first Y minutes of the movie at twice the usual speed as he was warned by his friends that the movie gets interesting only after the first Y minutes.

How long will Chef spend watching the movie in total?
Note: It is guaranteed that Y is even.

Input Format - 
The first line contains two space separated integers X,Y - as per the problem statement.

Output Format - 
Print in a single line, an integer denoting the total number of minutes that Chef spends in watching the movie.
*/

#include <iostream>
using namespace std;

int main() {
	int a,b;cin>>a>>b;
	int c=b/2,d=a-b,e=d+c;
	cout<<e<<endl;
	return 0;
}
