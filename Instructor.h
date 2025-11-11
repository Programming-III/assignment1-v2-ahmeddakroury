#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
#include <string>
#include <iostream>
using namespace std;

class Instructor : public Person {
private:
    string department;
    int experienceYears;
public:
    Instructor(){
        department = "";
        experienceYears = 0;
    }

    Instructor(string name, int age, string dept, int expYears) : Person(name, age) {
        department = dept;
        experienceYears = expYears;
    }

    void display() override {
        Person::display();
        cout << "Department: " << department << endl;
        cout << "Years of Experience: " << experienceYears << endl;
    }

    ~Instructor()  {}
};

#endif
