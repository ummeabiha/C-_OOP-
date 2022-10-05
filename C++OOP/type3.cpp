/*
Type3---> Both the variables and function will be public.
Public variables can be accessed directly, so there is no need for function
and cn be set directly in the main.
Output---> Public function display()
*/

#include <iostream>
using namespace std;

class Account
{
public:
	int number;
	double balance;
public:
	void display()
	{
		cout<<"Account Number is "<<number<<endl;
		cout<<"Balance:  "<<balance<<endl;
	}
};
int main()
{
	Account Ac;
	Ac.number = 001;
	Ac.balance  = 209.8;
	Ac.display();
	return 0;
}
