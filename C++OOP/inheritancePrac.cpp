#include "inheritancePrac.h"
#include <iostream>
using namespace std;

Shape:: Shape()
{
    length=0;
    width=0;
}

Shape:: Shape(int l, int w)
{
    length= l;
    width= w;
}

Rectangle::Rectangle()
{
    breadth=0;
}

Rectangle::Rectangle(int l, int w, int b):Shape(l,w)
{
    breadth=b;
}



int main()
{
    
    return 0;
}