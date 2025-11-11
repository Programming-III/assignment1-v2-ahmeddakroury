#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
using namespace std;


class Person {
private:
    string name;
    int id;
public:
    Person (){
        this->name = "";
        this->id = 0;
     }

     Person (string name, int id){
        this->name = name;
        this->id = id;
     }
     
     void display(){
        cout << "Name: " << name << ", ID: " << id << endl;
     }  
        
}; 

#endif
