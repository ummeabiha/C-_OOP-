#include <iostream>
using namespace std;

class DateTime
{
    int Day=0, Month=0, Year=0;
    int Sec=0, Min=0, Hour=0;

    public:

    void SetValue(int day, int month, int year)
    {
        Day= day;
        Month= month;
        Year= year;
    }

    void SetValue(int day, int month, int year, int hour)
    {
        Day= day;
        Month= month;
        Year= year;
        Hour= hour;
    }

    void SetValue(int day, int month, int year, int hour, int min)
    {
        Day= day;
        Month= month;
        Year= year;
        Min= min;
        Hour= hour;
    }

    void SetValue(int day, int month, int year, int hour, int min, int sec)
    {
        Day= day;
        Month= month;
        Year= year;
        Sec= sec;
        Min= min;
        Hour= hour;
    }

    void Display()
    {
        cout << Day << "," <<  Month << ","<< Year << endl;
        cout << Sec << ":" << Min << ":" << Hour << endl;
    }

};

int main()
{
    DateTime a;
    a.SetValue(10,03,2004);
    a.Display();
    a.SetValue(10,03,2004,9);
    a.Display();
    return 0;
}