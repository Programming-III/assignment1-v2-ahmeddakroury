#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;

class Student : public Person {
private:
    int yearLevel;
    string major;
public:
    Student(){
        yearLevel = 1;
        major = "Undeclared";
    }

    Student(string n, int a, int y, string m) : Person(n, a), yearLevel(y), major(m) {}

    void display() override {
        Person::display();
        cout << "Year Level: " << yearLevel << endl;
        cout << "Major: " << major << endl;
    }
};

#endif
