#include <iostream>
#include "string.h"


using namespace std;

int main()
{
	int num1 = 0;
	int num2 = 0;
	string optr;

	cin>>num1;
	cin>>num2;
	cin>>optr;

	int res = 0;

	if(optr == "+")
	{
		res = num1 + num2;
	}

	cout<<num1 << " " << num2 << " " << optr << endl;

	cout<<"Result: "<< res << endl;
}