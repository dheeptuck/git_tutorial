#include <iostream>
#include "string.h"
#include "math.h"

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
	else if(optr == "sqrt")
	{
		res = sqrt(num1);
	}

	cout<<num1 << " " << num2 << " " << optr << endl;

	cout<<"Result: "<< res << endl;
}