/*
Day - 41
code - Bus Seat Numbering
There is a bus with 30 seats. The seats are numbered from 1 to 30, and the numbering is as depicted in this image.

As can be seen in the image, the bus is divided into two decks - The Lower deck, and the Upper deck, with 15 seats each. And some of the seats come as Single and some as Double. For example, Seats 1 and 2 are Double, whereas Seat 11 is a Single.

You will be given a Seat number, and your job is to classify it as one of these 4 types:

Lower Single
Lower Double
Upper Single
Upper Double
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line of input which contains a single integers N — the seat number.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int x, seatNo, testCases;
	
	cin >> testCases;
	while(testCases--)
	{
	    cin >> seatNo;
	    
	    if(seatNo <= 15) {
	        if(seatNo <= 10) {
	            cout << "Lower Double"<< endl;
	        } else {
	            cout << "Lower Single"<< endl;
	        }
	    } else {
	        if(seatNo <= 25) {
	            cout << "Upper Double"<< endl;
	        } else {
	            cout << "Upper Single"<< endl;
	        }
	    }
	}
	return 0;
}