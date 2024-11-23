#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    void learn()
    {
        cout << "Student is learning.\n" ;
    }
};

class Teacher
{
public:
    void teach(Student& student)
    {
        // Teacher interacts with Student
        cout << "Teacher is teaching.\n" ;
        student.learn();           // Teacher calls a method on Student
    }
};

int main()
{
    Student student;
    Teacher teacher;

    teacher.teach(student); // Association in action
    return 0;
}
