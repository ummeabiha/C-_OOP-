#include <iostream>
using namespace std;

class point
{
    private:
        int x_coordinate;
        int y_coordinate;
    public:
        point(){};
        point(int x, int y)
        {
            x_coordinate=x;
            y_coordinate=y;
        }    
        void show()
        {
            cout << "(" << x_coordinate <<"," << y_coordinate << ")"<< endl;
        }  
            
    point operator+(point& op2)
    {
        point temp;
        temp.x_coordinate= x_coordinate+ op2.x_coordinate;
        temp.y_coordinate= y_coordinate+ op2.y_coordinate;
        return temp;
    } 

    point operator++(int);   
};

point point::operator++ (int)
{    
    x_coordinate++;
    y_coordinate++;
    return *this;
}

int main()
{
    point ob1(10,20), ob2(5,30);
    ob1.show();
    ob2.show();

    ob1=ob1+ob2;
    ob1.show();

    ob1++;
    ob1.show();

    return 0;
}