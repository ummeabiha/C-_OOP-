//UNARY OPREATOR OVERLOADING THROUGH NON MEMBER FUNCTIONSS

#include <iostream>
using namespace std;

class Overload
{
    private:
    int value;
    
    public:
    Overload(int v=10)
    {
        value=v;
    }

    void display()
    {
        cout << "value is " << value << endl;
    }
 /*  

    //MEMBER FUNCTIONS 
    //pre
    void operator ++()
    {
        ++value;
    }

    void operator --()
    {
        --value;
    }

    //post
    void operator ++(int)
    {
        value++;
    }
 
    void operator --(int)
    {
        value--;
    }
*/


    //NON MEMBER:
    friend Overload operator ++(Overload&);
    friend Overload operator --(Overload&);

    //post
    friend Overload operator ++(Overload&,int);
    friend Overload operator --(Overload&,int);
};

Overload operator++(Overload &obj)
{
    Overload temp;
    temp.value = ++obj.value;
    return temp;
}

Overload operator--(Overload &obj)
{
    Overload temp;
    temp.value = --obj.value;
    return temp;
}

Overload operator++(Overload &obj,int)
{
    Overload temp;
    temp.value= obj.value++;
    return temp;
}

Overload operator--(Overload &obj, int)
{
    Overload temp;
    temp.value= obj.value--;
    return temp;
}


int main()
{
    Overload p(10);
    
    //post
    p++;
    p.display();
    p--;
    p.display();
    
    //pre
    ++p;
    p.display();
    --p; 
    p.display();
    
    return 0;
}