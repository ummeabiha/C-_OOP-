#include<iostream>
using namespace std;

#ifndef _student_h 
#define _student_h

class student
{
  protected:
  string uni_name;
  int enroll;       
  
  public:
         void getdata();
         void showdata();
};       
         
 
#endif