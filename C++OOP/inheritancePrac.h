#ifndef HEADER_H
#define HEADER_H

class Shape
{
    private:
    int length;
    int width;

    public:
    Shape();
    Shape(int l, int w);
};

class Rectangle: public Shape
{
    private:
    int breadth;

    public:
    Rectangle();
    Rectangle(int l,int w, int b);
    
};

#endif