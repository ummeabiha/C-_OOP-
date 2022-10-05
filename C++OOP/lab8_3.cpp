//Syeda Umm E Abiha Rizvi
//SE-21014

#include <iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int img;
    public:
    
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    friend ostream & operator<<(ostream &out, const Complex &c);
    friend istream & operator>>(istream &in, Complex &c);
};

istream & operator>>(istream &in, Complex &c)
{
    cout << "Enter real part " << endl;
    in >> c.real;
    cout << "Enter imaginary part " << endl;
    in >> c.img;
    return in;
}

ostream & operator<<(ostream &out, const Complex &c)
{
    out << c.real;
    out << "+" << c.img << "i" << endl;
    return out;
}

int main()
{
    Complex c1;
	cin>>c1;
	cout<<"The complex object is:";
	cout<<c1;
	return 0;   

}

