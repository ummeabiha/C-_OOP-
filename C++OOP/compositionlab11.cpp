//Syeda Umm E Abiha Rizvi
//SE-21014

#include<iostream>
#include <cstring>
using namespace std;

class Salary
{
public:
	float grosspay;
	float deduction;
	float netpay;
	Salary()
	{
		grosspay=0.0;
		deduction=0.0;
		netpay=0.0;
	}
	Salary(float gp,float de,float net_pay)
	{
		grosspay=gp;
		deduction=de;
		netpay=net_pay;
	}
};

class Date
{  
public:
	int day;
	int month;
	int year;
	Date()
	{
		day=0;
		month=0;
		year=0;
	}
	Date(int d, int mon, int yr)
	{
		day=d;
		month=mon;
		year=yr;
	}
};

class Employee
{ 
private:
	int Employee_No;
	char *Name;    //pointer of datatype char
	Salary S;
	Date D;
public:
	Employee(){};
	Employee(int en, char *name, int da, int mth, int yr, float gp, float ded, float net_pay)
	{
		Employee_No=en;
		Name = new char[80]; 	//allocation of array in memory dynamically 
		strcpy(Name, name);
	}
	void getemployee()
	{
		cout<<"Enter employee no:";
		cin>>Employee_No;
		cout<<"Enter employee name:";
		Name = new char[80];
		cin>>Name;
		cout<<"Enter gross pay:";
		cin>>this->S.grosspay;
		cout<<"Enter deduction from salary:";
		cin>>this->S.deduction;
		cout<<"Enter net pay:";
		cin>>this->S.netpay;
		cout<<"Enter date as day, month and year";
		cin>>this->D.day;
		cin>>this->D.month;
		cin>>this->D.year;
	}
	void display()
	{
		cout<<"Employee details are:"<<endl;
		cout<<"Employee number:"<<Employee_No<<endl;
		cout<<"Employee name:"<<Name<<endl;
		cout<<"Salary details are:"<<endl;
		cout<<"Gross pay:"<<this->S.grosspay<<endl;
		cout<<"Deductions:"<<this->S.deduction<<endl;
		cout<<"Net pay:"<<this->S.netpay<<endl;
		cout<<"Date of joining was:"<<endl;
		cout<<this->D.day<<"/"<<this->D.month<<"/"<<this->D.year<<endl;
	}
};

int main()
{
	Employee emp;
	emp.getemployee();
	emp.display();
	system("pause");
	return 0;
}
