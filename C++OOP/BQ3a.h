#include <string> 
using namespace std;

class GradeBook
{
    private:
    string CourseName;
    string CourseInstructorName;

    public:
    GradeBook(string name, string instructor);
    void SetCourseName(string);
    string GetCourseName();
    void DisplayMessage();
    void SetCourseInstructor(string);
    string GetCourseInstructor();
    void Display();
    
};