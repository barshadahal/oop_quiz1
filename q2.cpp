/*Program: Question 2 from quiz 1.
Name: Barsha Dahal
Roll no: 0309
Output: Fred Jones
*/

#include<iostream>
using namespace std;

int main()
{	
	
	string s;
	
	string* p;
	
	s = "Fred Jones";
	
	p = &s;
	
	cout << *p;
}

//ANS:Fred	Jones

