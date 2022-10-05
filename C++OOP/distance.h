//This is the header file naming distance.h


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

    rectangle();

    rectangle(int , int );

    void showData();

};    