#include "BQ2a.h"
#include <iostream>
using namespace std;


void CarVehicle:: veh_add(int no, string name)
{
    RegNo = no;
    OwnerName = name;
}

void CarVehicle:: veh_show()
{
    cout << "Registeration Number: " << RegNo << endl;
    cout << "Owner Name: " << OwnerName << endl;
}

void  Car :: getCar()
{
    veh_add(14, "Abiha");
    cout << "Enter Color " << endl;
    cin >> Color;
    cout << "Enter Company " << endl;
    cin>> Company;
    cout << "Enter Model Year " << endl;
    cin >> ModelYear;
    cout << "Enter Price " << endl;
    cin >> Price;
    cout << "Enter Status (new/registered)" << endl;
    cin >> status;
}

void Car :: checkCar()
{
    if ((status!= "registered") || (status == "new"))
    {
        cout << "Please register your car" << endl;
        Price+= 10000;
    }

    else 
    {
        Price+=0;
    }

}

void  Car :: showCar()
{
    veh_show();
    cout << "Color: " << Color << endl;
    cout << "Company: " << Company << endl;
    cout << "Model Year: " << ModelYear << endl;
    cout << "Price: " << Price << endl;
}

int main()
{

    Car c1,c2;

    c1.getCar();
    c1.checkCar();
    c1.showCar();
        
    c2.getCar();
    c2.checkCar();
    c2.showCar();

    return 0;
}