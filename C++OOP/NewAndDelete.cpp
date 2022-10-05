#include <iostream>
using namespace std;


int main()
{
    // Pointer Variables Of Diff Datatypes
    char *name;
    int *age;
    string *status;

    //Dynamic Allocation
    name= new char[4];
    age = new int;
    status= new string;

    //Assigning the values
    *name='J';
    *age= 28;
    *status= "Engineer";
    
    //Print Values:   
    cout << "Name: " << *name << endl;
    cout << "age: " << *age << endl;
    cout << "status: " << *status << endl;

    //It will free the memory and can print the garbage value:
    delete[] name;
    cout << "After Using Delete" << endl;
    cout << "Name: " << *name << endl;
    return 0;
}