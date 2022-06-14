#include <iostream>
using namespace std;

//To demonstrate passing data to an object through member function
class Account
{
private:
	int number;
	double balance;
public:
	void data(int x, double y)
	{
		number = x;
		balance =y;
	}
	void display()
	{
		cout<<"Account Number is: "<<number<<endl;
		cout<<"Balance is: "<<balance<<endl;
	}
};
int main()
{
	Account Ac;
	Ac.data(001, 23.8);
	Ac.display();
	return 0;
}
