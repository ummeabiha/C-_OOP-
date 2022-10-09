//Syeda Umm E Abiha Rizvi
//SE-21014

#include <iostream>
using namespace std;

const int LEN = 80; // maximum length of names

class student       // educational background
{
private:
    char school[LEN]; // name of school or university
    char rank[LEN];   // pursuing degree
public:
    void getedu()
    {
        cout << "   Enter name of school or university: ";
        cin >> school;
        cout << "Enter Rank(Bachelor's, Master's, PhD): ";
        cin >> rank;
    }
    void putedu()
    {
        cout << "\n   School or university: " << school;
        cout << "\n   Rank: " << rank;
    }
};

class employee
{
private:
    char name[LEN];       // employee name
    unsigned long number; // employee number
public:
    void getdata()
    {
        cout << "\n   Enter last name: ";
        cin >> name;
        cout << "   Enter number: ";
        cin >> number;
    }
    void putdata()
    {
        cout << "\n   Name: " << name;
        cout << "\n   Number: " << number;
    }
};

class manager : private employee, private student
{
private:
    char title[LEN]; // "vice-president" etc.
    double dues;     // golf club dues
public:
    void getdata()
    {
        employee::getdata();
        cout << "   Enter title: ";
        cin >> title;
        cout << "   Enter golf club dues: ";
        cin >> dues;
        student::getedu();
    }
    void putdata()
    {
        employee::putdata();
        cout << "\n   Title: " << title;
        cout << "\n   Golf club dues: " << dues;
        student::putedu();
    }
};

class scientist : private employee, private student
{
private:
    int pubs; // number of publications
public:
    void getdata()
    {
        employee::getdata();
        cout << "   Enter number of pubs: ";
        cin >> pubs;
        student::getedu();
    }
    void putdata()
    {
        employee::putdata();
        cout << "\n   Number of publications: " << pubs;
        student::putedu();
    }
};
class laborer : public employee // laborer
{
};

int main()
{
    manager m1;
    scientist s1;
    laborer l1;

    cout << "\nEnter data for manager 1"; // get data for
    m1.getdata();

    cout << "\nEnter data for scientist 1";
    s1.getdata();

    cout << "\nEnter data for laborer 1";
    l1.getdata();

    cout << "\nData on manager 1";
    m1.putdata();

    cout << "\nData on scientist 1";
    s1.putdata();

    cout << "\nData on laborer 1";
    l1.putdata();

    return 0;
}
