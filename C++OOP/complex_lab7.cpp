// Syeda Umm E Abiha Rizvi
// SE-21014

#include <iostream>
#include <cmath>
using namespace std;

class complexNo
{
  private:
  int realNo;
  int imaginaryNo;
   
   public:
   // Default Constructor
   complexNo();
   // Parameterised Constructor
   complexNo(int, int);
   //Copy COnstructor
   complexNo(const complexNo&);
   void display();
   void magnitude();
   friend complexNo addition(complexNo c1, complexNo c2);
};

complexNo :: complexNo()
{
    realNo=0;
    imaginaryNo=0;
}

complexNo :: complexNo(int r, int i)
{
    realNo=r;
    imaginaryNo= i;
}

void complexNo :: display()
{
    cout << "The complex no is ";
    cout << realNo << "+" << imaginaryNo << "i" <<endl;
}

void complexNo :: magnitude()
{
    float mag= sqrt(pow(realNo,2) + pow(imaginaryNo,2));
    cout << "The magnitude of complex no is " << mag <<endl;
}

complexNo addition(complexNo c1, complexNo c2)
{
    int add_real= (c1.realNo+ c2.realNo);
    int add_imaginary = (c1.imaginaryNo + c2.imaginaryNo);
    cout << "\nThe addition of two complex numbers is ";
    cout << add_real << "+" << add_imaginary << "i" << endl;
}

int main()
{
    complexNo c1 (10,5);
    c1.display();
    c1.magnitude();
    cout << endl;

    complexNo c2 (4,3);
    c2.display();
    c2.magnitude();
    cout << endl;
 
    //Copy Constructor
    complexNo c3(c2);
    cout << "The value of copy constructor is ";
    c3.display(); 
    c3.magnitude();

    complexNo sum;
    sum= addition(c1,c2);

    return 0;
}

