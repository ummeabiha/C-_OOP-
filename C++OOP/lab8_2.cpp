//Syeda Umm E Abiha Rizvi
//SE-21014

#include <iostream>
using namespace std;

class A
{
    private:
        int x;
        float y;

    public:
        A()
        {
            x=0;
            y=0;
        }

        A(int a, int b)
        {
            x=a;
            y=b;
        }

        void display ()
        {
            cout << "x= "<< x << endl << "y= "<< y << endl;

        }

        A operator+ (const A& Obj)const
        {
            A temp;
            temp.x = x+Obj.x;
            temp.y = y+Obj.y;
            return temp;
        }

};

int main()
{
    A t1(4,5);
    t1.display();
    A t2(8,9);
    A sum;
    sum= t1+t2;
    sum.display();
    
    return 0;
}
