#include <iostream>
#include <string>
#include "student.h"
using namespace std;

student :: student()
{
    name= "";
    rollno = 0;
    GPA = 0.0;
}

void student :: setData()
{
    cout << "Enter Name" << endl;
    getline(cin,name);
    cout<< "Enter Roll no "<<  endl;
    cin>> rollno;
    cout<< "Enter GPA for roll no "<< rollno << endl;
    cin>> GPA;
}

void student :: getData()
{
   cout<< "GPA for roll no "<< rollno << " is " << GPA;
}


int main()
{
    student a;
    a.setData();
    a.getData();

    return 0;
}
