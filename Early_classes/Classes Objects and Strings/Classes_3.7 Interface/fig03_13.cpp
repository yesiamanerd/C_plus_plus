// GradeBook class demonstration after separating
// its interface from its implemenation.
#include <iostream>
#include "GradeBook.h"
using namespace std;

int main(){
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("CS102 Data Structure in C++");

    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName() 
        << "\ngradeBook2 created for course: " << gradeBook2.getCourseName() 
        << endl;
}