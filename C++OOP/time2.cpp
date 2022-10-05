#include <iostream>
#include "time2.h";
using namespace std;

Time2 ::Time2()
{
    hours = 0;
    minutes = 0;
    seconds = 0;
}

 void Time2 ::  setData()
{
    cout << "Enter hours " << endl;
    cin >> hours;
    cout << "Enter minutes " << endl;
    cin >> minutes;
    cout << "Enter seconds " << endl;
    cin >> seconds;
}

void Time2 ::  getData()
{
    cout << hours << "hr:" << minutes << "min:" << seconds << "secs"<< endl;
}

int main()
{
    Time2 t;
    t.setData();
    t.getData();

    return 0;
}