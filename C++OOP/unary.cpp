#include<iostream>
#include<conio.h>
using namespace std;


//Example: UNARY OPERATOR (++) overloading  
 
 class abc
 {
 int a,b;
 
 public:

 abc(int x, int y)
 {
 a=x;
 b=y;
 }

 abc operator ++()
 {
 a++;
 b++;
 return abc(a,b);
 } 

 void show()
 {
 cout<<"a= "<<a<<endl;
 cout<<"b= "<<b<<endl;
 }
  
 };

 int main()
 {
 abc a1(10,20);
 a1.show();
 ++a1;
 a1.show();
 ++a1;
 a1.show();
 getch();
 }
  

