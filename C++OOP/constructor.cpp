#include<iostream>
using namespace std;

//Default Constructor
class Account
{
private:
	int number;
	double balance;
public:
	Account() : number(0), balance(0){}
	void getdata()
	{
		cout<<"Enter number: ";
		cin>>number;
		cout<<"Enter balance: ";
		cin>>balance;
	}
	void show()
	{
		cout<<"Number is: "<<number<<endl;
		cout<<"Balance is: "<<balance<<endl;
	}
};
int main()
{
	Account Ac;
	Ac.getdata();
	Ac.show();
	return 0;
}

/*
//Constructor
class Account
{
private:
	int number;
	double balance;
	string name;
public:
	Account(int x, double y, string s)
    {
		number = x;
		balance = y;
		name = s;
    }
	void show()
    {
		cout<<"Number is: "<<number<<endl;
		cout<<"Balance is: "<<balance<<endl;
		cout<<"My name is: "<<name<<endl;
    }
};
int main()
{
	Account Ac(001, 234.6, “David");
	Ac.show();
	return 0;
}
*/

/*
//Overloaded Constructor
class Account
{
private:
	int number;
	double balance;
public:
	Account()	
    {
		number = 0;
		balance = 0;
    }
	Account(int x)
    {
		number  = x;
		balance =0;
    }
	
Account(int x, double y)
	{
		number = x;
		balance = y;
    }
void show()
	{
		cout<<"Number is: "<<number<<endl;
		cout<<"Balance is: "<<balance<<endl;
    }

}; 

int main()
{
	Account Ac;
	Ac.show();
	Account Ac1(100);
	Ac1.show();
	Account Ac1(003, 456.8);
	Ac1.show();
	return 0;
}

*/


