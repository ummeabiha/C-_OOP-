//Syeda Umm E Abiha Rizvi
//SE-21014

#include <iostream>
using namespace std;

class OverLoad
{
    private:
    int num;
    
    public:
    OverLoad(int n=0)
    {
        num=n;
    }

    void getNum()
    {
        cout<< "Enter a number 0 or 1 to test the overloading of ! operator " << endl;
        cin>> num;
    }
    void display()
    {
        cout << "The number is " << num << endl;
    }

    bool operator!()
    {
        num=!num;
    }

};

int main()
{
    OverLoad obj1;
    obj1.getNum();
    obj1.display();

    !obj1;
    obj1.display();

    return 0;
}

