//Syeda Umm E Abiha Rizvi
//SE-21014

#include <iostream>
#include <string>
using namespace std;

class Emplopyee
{
private:
    string name;
    int empNo;
    float empId;

public:
    void setData()
    {
        cout << " Enter Emp Name" << endl; 
        cin >> name;
        cout << " Enter Emp No" << endl;
        cin >> empNo;
        cout << "Enter Emp Id" << endl;
        cin >> empId;
    }
    void showData()
    {
        cout << "emp no is " << empNo<<endl;
        cout << "emp id is " << empId<<endl;
    }
};

int main()
{
    Emplopyee a1, a2, a3;
    a1.setData();
    a1.showData();
    a2.setData();
    a2.showData();
    a3.setData();
    a3.showData();

    return 0;
}

