#include <iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int imaginary;

    public:
    void input()
    {
        cout << "Enter real part " << endl;
        cin >> real;
        cout << "Enter imaginary part " << endl;
        cin >> imaginary;
        
    }

    //Overloading
    Complex operator+ (Complex obj)
    {
        Complex temp;
        temp.real = real+obj.real;
        temp.imaginary= imaginary+obj.imaginary;
        return temp;
    }

    void display()
    {
        cout << real << " + " << imaginary << " i"<< endl;
    }

};

int main()
{
    Complex C1,C2,sum;
    cout << "Enter Complex No 1 " << endl;
    C1.input();
    cout << "Enter Complex No 2 " << endl;
    C2.input();
    
    sum= C1+ C2;
    sum.display();
    return 0;
}