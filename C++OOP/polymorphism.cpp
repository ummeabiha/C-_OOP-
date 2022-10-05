#include <iostream>
using namespace std;

class Person
{
    private:
    string name;
    
    public:
    void setName()
    {
        cout << "Enter name " << endl;
        cin>> name;
    }
    void getName()
    {
        cout << "Name is " << name << endl;
    }

    virtual void getData()=0;
    virtual bool BoolIsOutstanding()=0;
};

class Student:public Person
{
    private:
    float gpa;
    
    public:
    void getData()
    {
        Person::setName();
        cout << "Enter gpa " << endl;
        cin>> gpa;
    }
    bool BoolIsOutstanding()
    {
        return (gpa >= 3.5)? true:false;
    }
};

class Professor: public Person
{
    private:
    int noOfPub=0;
    public:
    void getData()
    {
        Person::setName();
        cout << "Enter the no of publications " << endl;
        cin>> noOfPub;
    }
    bool BoolIsOutstanding()
    {
        return (noOfPub>=10)? true:false;
    }
};

int main()
{
    Person *personPtr[100];
    int n=0;
    char choice;

    do
    {
        cout << "Enter your choice (s/p) " << endl;
        cin>> choice;

        if (choice=='s')
        {
            personPtr[n]= new Student;
        }
        else if (choice=='p')
        {
            personPtr[n]= new Professor;
        }
        personPtr[n++]-> getData();

        cout << "Do you want to enter another record? (y/n) " << endl;
        cin >> choice;

    } while (choice=='y');
    
    for (int j=0;j<n;j++)
    {
        personPtr[j]-> getName();

        if (personPtr[j]->BoolIsOutstanding()==true)
        {
            cout << "The person is outstanding " << endl;
        }

    }
    
    return 0;
}