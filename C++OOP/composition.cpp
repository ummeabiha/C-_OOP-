//Using the object of one class as a data member of other class is Composition.

#include <iostream>
#include <string>
using namespace std;

class personType
{
    private:
    string firstName,lastName;

    public:
    personType(string first ="", string last="")
    {
        firstName=first;
        lastName=last;
    }

    void printName() const
    {
        cout << firstName << "\t" << lastName << endl;
    }

    void setName(string first, string last)
    {
        firstName=first;
        lastName =last;
    }

    string getFirstName() const
    {
        return firstName;
    }

    string getLastName() const
    {
        return lastName;
    }

};


class DateType
{
    private:
    int dMonth, dDay, dYear;

    public:
    DateType(int month=3, int day=10 ,int year=2004)
    {
        dMonth= month;
        dDay= day;
        dYear= year;
    }

    void setDate(int month, int day ,int year)
    {
        dMonth= month;
        dDay= day;
        dYear= year;
    }

    void printDate() const
    {
        cout << dMonth << "-" << dDay << "-" << dYear;
    }

    int getMonth() const
    {
        return dMonth;
    }

    int getDay() const
    {
        return dDay;
    }

    int getYear() const
    {
        return dYear;
    }

};

class PersonalInfo
{
    private:
    personType name;
    DateType bday;
    int personalId;

    public:
    PersonalInfo(string first="", string last="",int day=10, int month=3,int year=2004, int ID=14) : name(first,last),bday(month,day,year)
    {
        personalId =ID;
    }

    void setPersonalInfo(string first, string last,int day, int month,int year, int ID)
    {
        name.setName(first,last);
        bday.setDate(month,day,year);
        personalId =ID;
    }

    void printInfo() const
    {
        name.printName();
        cout << "BDAY IS : ";
        bday.printDate();
        cout << "\nPERSONAL ID IS : " << personalId;
    } 

};


int main()
{
    personType name;
    name.setName("Abiha","Irfan");
    name.printName();
    cout << endl;
    
    DateType bday;
    bday.setDate(10,03,2004);
    bday.printDate();
    cout << endl << endl;

    PersonalInfo info;
    info.setPersonalInfo("Sara","Hameed",7,7,2003,12);
    info.printInfo();

    return 0;
}
