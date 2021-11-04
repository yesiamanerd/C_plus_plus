// (Modifying Class GradeBook) Modify class GradeBook (Figs. 3.11–3.12) as follows:
// a) Include a second string data member that represents the course instructor’s name.
// b) Provide a set function to change the instructor’s name and a get function to retrieve it.
// c) Modify the constructor to specify course name and instructor name parameters.
// d) Modify function displayMessage to output the welcome message and course name,
// then the string "This course is presented by: " followed by the instructor’s name.
// Use your modified class in a test program that demonstrates the class’s new capabilities.
#include <iostream>
#include <string>
#include "GradeBook.h"
using namespace std;

int main(){
    GradeBook gradeBook1("CS101 Introduction to C++ Programming", "Paul Smith");
    GradeBook gradeBook2("CS102 Data Structure in C++", "Trevor Davis");

    gradeBook1.displayMessage();
    gradeBook2.displayMessage();
}