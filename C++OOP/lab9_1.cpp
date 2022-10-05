//Syeda Umm E Abiha Rizvi
//SE-21014

#include <iostream>
using namespace std;

class Student
{
    protected:
    int usn,age;
    char name[20];
};

class Ug : public Student
{
    int sem,fee,stid;
    public:
    void getUgData()
    {
        cout << "***** UNDER GRADUATE STUDENT *****"<< endl;
        cout << "ENTER NAME " << endl;
        cin>> name;
        cout << "ENTER SEM " << endl;
        cin >> sem;
        cout << "ENTER FEE " << endl;
        cin >> fee;
        cout << "ENTER STUDENT ID " << endl;
        cin >> stid;
    }
    void UgDisplay()
    {
        cout << "FOR UNDERGRADUATE " << endl;
        cout << name << "\t" << sem << "\t" << stid << "\t" << fee << endl;
    }
    int getUgSem()
    {
        return sem;
    }
    int getUgAge()
    {
        return age;
    }
};

class Pg : public Student
{
    int sem,fee,stid;
    public:
    void getPgData()
    {
        cout << "\n***** POST GRADUATE STUDENT *****"<< endl;
        cout << "ENTER NAME " << endl;
        cin>> name;
        cout << "ENTER SEM " << endl;
        cin >> sem;
        cout << "ENTER FEE " << endl;
        cin >> fee;
        cout << "ENTER STUDENT ID " << endl;
        cin >> stid;
    }
    void PgDisplay()
    {
        cout << "FOR POSTGRADUATE " << endl;
        cout << name << "\t" << sem << "\t" << stid << "\t" << fee << endl;
    }
    int getPgSem()
    {
        return sem;
    }
    int getPgAge()
    {
        return age;
    }
};

int main()
{
    Pg p[2];
    Ug u[2];
    
    u[2].getUgData();
    p[2].getPgData();
    
    cout << endl;
    u[2].UgDisplay();
    p[2].PgDisplay();

    system ("pause");
    return 0;
}

