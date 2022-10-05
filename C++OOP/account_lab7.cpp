// Syeda Umm E Abiha Rizvi
// SE-21014

#include <iostream>
using namespace std;

class Account
{
    private:
    int number;
    double balance;

    public:
    Account();
    void setData(int, double);
    void showData();
};

Account :: Account ()
{
    number=0;
    balance=0;
}

void Account :: setData(int num, double bal)
{
   number= num;
   balance = bal;
}

void Account :: showData ()
{
  cout << "The balance for Account No " << number << " is $" << balance << endl;
}

int main()
{
    Account Abiha;
    Abiha.setData(14, 40000);
    Abiha.showData();
    
    return 0;
}

