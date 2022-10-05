#include <iostream>
using namespace std;

class Person
{
    public:
    int Age;
    char Gender;
    void Get_gender(char g)
    {
        Gender= g;
    }
};

class Employee
{
protected:
Person a;
int EmployeeID;
double Salary;
public:
string Name;
void Get_data(string name,int ID, double salary,int age, char gender)
{
    Name= name;
    Salary= salary;
    EmployeeID= ID;
    a.Age = age;
    a.Get_gender(gender);
}

void print_data(void)
{
    cout << "Name: " << Name << endl;
    cout << "Employee ID: " << EmployeeID << endl;
    cout << "Salary: " << Salary << endl;
    cout << "Age: " << a.Age << endl;
    cout << "Gender: " << a.Gender << endl;
}

};

class Faculty: public Person, public Employee 
{
    public:
    string Department;
    string Qualification;
    void Get_Data()
    {
        cout << "Enter Name: " << endl;
        cin >> Name;
        cout << "Employee ID: " << endl;
        cin >> EmployeeID;
        cout << "Salary: "  << endl;
        cin >> Salary;
        cout << "Age: " << endl;
        cin >> Age;
        cout << "Gender: " << endl;
        cin >> Gender;
        cout << "Enter Department: " << endl;
        cin >> Department; 
        cout << "Enter Qualification: " << endl;
        cin >> Qualification; 
    }
};

class Lecturer: public Faculty
{
    public:
    string Specialization;
    char Experience;
    void Get_Data(char exp)
    {
        Faculty::Get_Data();
        cout << "Enter Specialization: " << endl;
        cin >> Specialization;
        Experience= exp;
    }
    void print_Data()
    {
        print_data();
        cout << "Specialization: " << Specialization << endl;
        cout << "Experience: " << Experience << endl;
        cout << "Department: " << Department << endl;
        cout << "Qualification: " << Qualification << endl;
    }
};

int main()
{
    Lecturer L1;
    L1.Get_Data('5');
    L1.print_Data();
    return 0;
}