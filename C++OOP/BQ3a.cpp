#include <iostream>
#include <string>
#include "BQ3a.h"
using namespace std;


GradeBook::GradeBook(string name="", string instructor="")
{
    CourseName=name;
    CourseInstructorName= instructor;
}

void GradeBook :: DisplayMessage()
{
    cout << "Welcome To The Grade Book " << endl;
}

void GradeBook :: SetCourseName(string cname)
{
    CourseName= cname;
}

string GradeBook :: GetCourseName()
{
    return CourseName; 
}

void GradeBook :: SetCourseInstructor(string iname)
{
    CourseInstructorName= iname;
}

string GradeBook:: GetCourseInstructor()
{
    return CourseInstructorName;
}

void GradeBook:: Display()
{
    cout << "Course: " << GetCourseName() <<endl;
    cout << "Instructor: " << GetCourseInstructor() << endl; 
}

int main()
{
    GradeBook book;
    book.DisplayMessage();
    book.SetCourseName("Software Enginnering");
    book.SetCourseInstructor("Miss Sidra");
    book.Display();
    
    return 0;
}