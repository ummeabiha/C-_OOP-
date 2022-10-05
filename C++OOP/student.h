#ifndef STUDENT_H
#define STUDENT_H


class student
{
private:
    std :: string name;
    int rollno;
    float GPA;
    
public:
    student();
    student(std :: string, int, float);
    void setData();
    void getData();
};


#endif

