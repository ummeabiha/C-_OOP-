#include <iostream>
using namespace std;

class person
{
    private:
    string firstName="";
    string lastName="";
    int age=0;
    public:
    
    person(string first ="", string last="",int ag=0)
    {
        firstName=first;
        lastName=last;
        age=ag;
    }


    void setData(string first, string last, int ag)
    {
        firstName=first;
        lastName=last;
        age=ag;
    }

    string getname()
    {
        return (firstName+" "+lastName);
    }

    int getage()
    {
        return age;
    }

    void display()
    {
        cout << firstName + " " +lastName << endl;
        cout << age << endl;;
    }
};

class employee
{
    private:
    person Abiha;
    float salary;
    
    public:
    employee(string first="", string last="", int ag=0, float s=0.0):Abiha(first,last,ag)
    {
        salary=s;
    }

    void setDataa(string first, string last, int ag, float s)
    {
        Abiha.setData(first,last,ag);
        salary=s;
    }

    void display()
    {
        cout << Abiha.getname()<< endl;
        cout << Abiha.getage() << endl;
        cout << salary << endl;

    }
};



int main()
{
    person Abihaa;
    Abihaa.setData("Abiha","Irfan",18);
    Abihaa.display();

    employee Hamna;
    Hamna.setDataa("Hamna","Aamir", 19, 100000);
    Hamna.display();

    return 0;
}