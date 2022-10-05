#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    double inches;

public:
    //Default Constructor
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    // Constructor with parameters
    Distance(int ft, double in)
    {
        feet = ft;
        inches = in;
    }
    void getdist()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }
    void showdist()
    {
        cout << feet << "\'" << inches << '\"';
    }

    void add_dist(Distance, Distance);
};

void Distance::add_dist(Distance a, Distance b)   // d2,d3
{
    inches = a.inches + b.inches;
    feet = 0;
    if (inches >= 12.0)
    {
        inches -= 12.0;
        feet++;
    }
    feet = a.feet + b.feet;
}

int main()
{
    Distance dist1, dist3;
    Distance dist2(11, 6.25);

    dist1.getdist();

    /*
    Value of dist1 is taken from the user in getdist() function,
    and value of dist2 is passed by the parameters.
    dist3 is the object created to get the sum!
    */
    
    dist3.add_dist(dist1, dist2);    // dist3= dist1+dist2

    dist1.showdist();
    cout<< endl;
    dist2.showdist();
    cout<< endl;
    dist3.showdist();

    return 0;
}


