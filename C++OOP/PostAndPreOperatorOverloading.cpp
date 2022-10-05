#include <iostream>
using namespace std;

class Increase
{
    private:
    int value;

    public:
    Increase(int v=10)
    {
        value=v;
    }

    void display()
    {
        cout << "The value is " << value << endl;
    }

    friend Increase operator++(const Increase&);

    //FOR ASSIGNING THE VALUE OF PREINCREMENT OPERATOR IN A VARIABLE
    Increase operator ++()
    {
    Increase temp;
    temp.value = ++value;
    return temp;
    }

    //PreIncrement
    // void operator ++()
    // {
    //     ++value;
    // }
 
    //PostIncrement
    void operator ++(int)
    {
        value++;
    }

};

Increase operator++(const Increase& valueobj)
{
    Increase temp;
    temp= ++valueobj;
    return temp;
}

class Decrease
{
    private:
    int value;

    public:
    Decrease()
    {
        value=10;
    }

    void display()
    {
        cout << "The value is " << value << endl;
    }

    //PreDecrement
    void operator --()
    {
        --value;
    }

    //PostDecrement
    void operator --(int)
    {
        value--;
    }

};

int main()
{
    //PreIncrement and PreDecrement
    Increase PreInc;

    Decrease PreDec;
    ++PreInc;
    --PreDec;
    PreInc.display();
    PreDec.display();
    
    //PostIncrement and PostDecrement
    Increase PostInc;
    Decrease PostDec;
    PostInc++;
    PostDec--;
    PostInc.display();
    PostDec.display();


    //ASSIGNING THE VALUE OF PREINCREMENT OPERATOR IN A VARIABLE
    Increase Pre1;
    Pre1= ++PreInc;
    Pre1.display();

    //AS NON MEMBER FUNCTION
    Increase Inc(15);
    Inc++;
    Inc.display();

    return 0;
}