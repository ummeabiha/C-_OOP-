//Syeda Umm E Abiha Rizvi
//SE-21014

#include <iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int breadth;

public:
    int area()
    {
        return (length * breadth);
    }
    int perimeter()
    {
        return (2 * length * breadth);
    }

    rectangle()
    {
        length = 0;
        breadth = 0;
    }

    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    //CopyConstructor
    rectangle(const rectangle& l)
    {
        length= l.length;
        breadth= l.breadth;
    }

    void showData()
    {
        cout << "The length is " << length << " and breadth is " << breadth << endl;
        cout << "The area of rectangle is " << area() << endl;
        cout << "The perimeter of the rectangle is " << perimeter() << endl;
    }

    // Destructor ( Destroys the class after the execution of the program)
    ~rectangle() {}
};

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

