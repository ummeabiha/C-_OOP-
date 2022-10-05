#include <iostream>
using namespace std;

class MemberOverLoad
{
    int number1=80;
    int number2=50;
    
    public:

    MemberOverLoad(int num1=0, int num2=0)
    {
        number1= num1;
        number2= num2;
    }

    MemberOverLoad operator-(MemberOverLoad& num)
    {
        MemberOverLoad temp;
        temp.number1= number1-num.number1;
        temp.number2= number2-num.number2;
        return temp;
    }

    MemberOverLoad operator*(MemberOverLoad& num)
    {
        MemberOverLoad temp;
        temp.number1= number1* num.number1;
        temp.number2= number2* num.number2;
        return temp;
    }

    void display()
    {
        cout << "(" << number1 << "," << number2 << ")" << endl;
    }
    
};


class NonMemberOverLoad
{
    int number1= 10;
    int number2= 5;
    public:
    NonMemberOverLoad(int num1=0, int num2=0)
    {
        number1= num1;
        number2= num2;
    }

    void display()
    {
        cout << "(" << number1 << "," << number2 << ")" << endl;
    }

    friend NonMemberOverLoad operator-(NonMemberOverLoad&,NonMemberOverLoad&);
    friend NonMemberOverLoad operator*(NonMemberOverLoad&,NonMemberOverLoad&);
};

NonMemberOverLoad operator-(NonMemberOverLoad& first,NonMemberOverLoad& second)
{
    NonMemberOverLoad temp;
    temp.number1= first.number1- second.number1;
    temp.number2= first.number2- second.number2;
    return temp;
}

NonMemberOverLoad operator*(NonMemberOverLoad& first,NonMemberOverLoad& second)
{
    NonMemberOverLoad temp;
    temp.number1= first.number1* second.number1;
    temp.number2= first.number2* second.number2;
    return temp;
}

int main()
{
    MemberOverLoad mo1(10,15);
    MemberOverLoad mo2(20,10);
    MemberOverLoad mo3;
    cout << "Member OverLoading" << endl;
    mo3= mo2-mo1;
    mo3.display();
    mo3= mo1*mo2;
    mo3.display();
    
    NonMemberOverLoad nmo1(50,55);
    NonMemberOverLoad nmo2(10,5);
    NonMemberOverLoad nmo3;
    cout << "Non-Member OverLoading" << endl;
    nmo3= nmo1-nmo2;
    nmo3.display();
    nmo3= nmo1*nmo2;
    nmo3.display();
    
    return 0;
}