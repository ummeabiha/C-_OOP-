/*
Type4---> variables are public.
Output: in main program
*/

#include<iostream>
using namespace std;

class Account
{
public:
	int number;
	double balance;
};

int main()
{
	Account Ac;
	Ac.number = 001;
	Ac.balance  = 209.8;
	cout<<"Number is "<<(Ac.number)<<endl;
	cout<<"Balance is "<<(Ac.balance)<<endl;

	return 0;
}
