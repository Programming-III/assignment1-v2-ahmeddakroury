#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;

class Course {
private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;
public:
    Course(){
        courseCode = "";
        courseName = "";
        maxStudents = 0;
    }

    Course(string cc , string cn , int maxS){
        courseCode = cc;
        courseName = cn;
        maxStudents = maxS;
    }

    void addStudent(const Student& s){
        if(currentStudents < maxStudents)
            students.add(s);
        else
        return;

    }

    void displayCourseInfo(){
            cout << "course: " << courseCode << "-" << courseName << endl;
            cout << "max students: " << maxStudents << endl;
            cout << "currently enrolled: " << students << endl;
    }














#endif
