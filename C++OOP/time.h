#ifndef TIME_H // Header file interface
#define TIME_H // Prevent multiple inclusion of header file

class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    // Constructor
    Time();
    Time(int, int, int);
    // Functions
    void setTime(int, int, int);
    void display();
    void getTime();
};
#endif
