#ifndef TIME2_H
#define TIME2_H

class Time2
{
    private:
    int hours;
    int minutes;
    int seconds;

    public:
    Time2();
    Time2(int, int, int);
    void setData();
    void getData();

};
#endif