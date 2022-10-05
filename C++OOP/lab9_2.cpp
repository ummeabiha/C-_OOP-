//Syeda Umm E Abiha Rizvi 
//SE-21014

#include <iostream>
using namespace std;

class Rectangle
{
    private:
    double length;
    double width;
    
    public:
    Rectangle(double l=0.0, double w=0.0)
    {
        length=l;
        width=w;
    }

    void setDimensions(double l, double w)
    {
        length=l;
        width=w;
    }

    double getLength() const
    {
        return length;
    }

    double getWidth() const
    {
        return width;
    }

    double area() const
    {
        return (length*width);
    }

    double perimeter() const
    {
        return (2*(length+width));
    }

    void print() const
    {
        cout << "The length of the rectangle is " << getLength() << endl;
        cout << "The width of the rectangle is " << getWidth() << endl;
        cout << "The area of the rectangle is " << area() << endl;

    }

};

class BoxType : public Rectangle
{
    private:
    double height;

    public:
    BoxType(double l=0.0, double w=0.0, double h=0.0) : Rectangle(l, w)
    {
        height=h;
    }

    void setDimensions(double l, double w, double h)
    {
        Rectangle::setDimensions(l,w);
        height=h;
    }

    double area() const
    {
        return (2*(getLength()+getWidth())+(getLength()*height)+(height*getWidth()));
    }

    double getHeight() const
    {
        return height;
    }

    double getVolume() const
    {
        return (getLength()*getWidth()*height);
    }

    void print() const
    {
        cout << "The length of the box is " << getLength() << endl;
        cout << "The width of the box is " << getWidth() << endl;
        cout << "The height of the box is " << getHeight() << endl;
        cout << "The volume of the box is " << getVolume() << endl;
        cout << "The area of the box is " << area() << endl;
    }

};

int main()
{
    Rectangle r;
    r.setDimensions(10.0,20.5);
    r.print();
    BoxType b;
    b.setDimensions(18.0,7.8,5.0);
    cout << endl;
    b.print();
    
    return 0;
}
