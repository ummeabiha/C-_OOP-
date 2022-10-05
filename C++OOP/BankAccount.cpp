//Syeda Umm E Abiha Rizvi
//SE-21014

#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNo;
    string accountName;
    float accountBalance;

public:
    //Default Constructor
    BankAccount()
    {
        accountNo = 0;
        accountName = "";
        accountBalance = 0.0;
    }
    BankAccount(int no)
    {
        accountNo = no;
        accountName = "";
        accountBalance = 0.0;
    }
    BankAccount(int no,string name)
    {
        accountNo = no;
        accountName = name;
        accountBalance = 0.0;
    }
    BankAccount(int no, string name, float balance)
    {
        accountNo = no;
        accountName = name;
        accountBalance = balance;
    }
    
    void showData()
    {
        cout<< "Account No is "<< accountNo <<endl;
        cout<< "Account Name is "<< accountName <<endl;
        cout<< "Balance is " << accountBalance <<endl;
    }
};

int main()
{
    //OverLoading
    BankAccount Maham, Abiha, Meerab;
    
    Maham.showData();
    BankAccount Maham1(4);  // Other Object naming Maham1
    BankAccount Maham2(4, "Maham");
    BankAccount Maham3(4,"Maham Tariq Khan TNF", 100000.0);
    Maham1.showData();
    Maham2.showData();
    Maham3.showData();

    cout << endl;
    Abiha.showData();
    BankAccount Abiha1(14,"Abiha",5000.0);
    Abiha1.showData();

    cout<< endl;
    BankAccount Meerab1(19,"Meerab",50000.0);
    Meerab1.showData();

    return 0;
}
