#include <string>
using namespace std;

class CarVehicle
{
    private:
    int RegNo;
    string OwnerName;

    protected:
    string status;

    void veh_add(int, string);
    void veh_show();
    
};


class Car:public CarVehicle
{
    private:
    string Color;
    string Company;
    int ModelYear;
    long Price;

    public:
    void getCar();
    void checkCar();
    void showCar();

};

