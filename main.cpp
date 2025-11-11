#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"

// i implemented everyclass in its header , i came late and had no idea now i have no time:( //
using namespace std;


int main() {
   Student s = new Student("Omar Nabil" , 2202 , 2 , "CS");
   Instructor i = new Instructor("Lina khaled" , 123 ,  "Informatics" , 5);
   Course c = new Course("101" , "intro to prog" , 3);

   c.displayCourseInfo();
   s.display();
   i.display();
    
    return 0;
}
