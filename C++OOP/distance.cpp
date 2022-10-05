//This program will add the header file distance.h in this program.

#include <iostream>
#include "distance.h"
using namespace std;

rectangle :: rectangle()
{
    length=0;
    breadth=0;
}

rectangle :: rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

void rectangle::showData()
{
    cout << "The length is " << length << " and breadth is " << breadth << endl;
    cout << "The area of rectangle is " << area() << endl;
    cout << "The perimeter of the rectangle is " << perimeter() << endl;
}

int main()
{
    rectangle r1;
    rectangle r2(2, 4);
    r2.showData();

    cout << endl;

    // Copy Constructor(copies the value from one constructor to other)
    rectangle r3(r2);
    r3.showData();

    return 0;
}