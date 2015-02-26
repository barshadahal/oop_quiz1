/*Program: Question 6 from quiz 1.
Name: Barsha Dahal
Roll no: 0309
Output: 2358852
*/


#include<iostream>
using namespace std;

int main()
{	
	int a; int* q;
	
	a = 4;
	
	q = &a;
	
	cout << *(q+1);
}



