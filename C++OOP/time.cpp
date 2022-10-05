#include <iostream>
#include "time.h"
using namespace std;

Time :: Time()
{
    hour=0;
    minute=0;
    hour=0;
}

void Time :: getTime()
{
    cout<< "Enter hours "<< endl;
    cin>> hour;
    cout<< "Enter minute "<< endl;
    cin>> minute;
    cout<< "Enter second "<< endl;
    cin>> second;
}

void Time:: display()
{
   cout<< hour << ";" << minute << ";" << second << endl; 
}

void Time :: setTime(int h, int m, int s)
{
    cout<< h << ";" << m << ";" << s << endl;
}

int main()
{
    Time t;
    t.getTime();
    t.display();
    cout<< endl;
    t.setTime(10,20,30);

    return 0;
}

