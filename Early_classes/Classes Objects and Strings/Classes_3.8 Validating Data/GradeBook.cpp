// Implementations of the GradeBook member-function definitions.  
// The setCourseName function performs validation.
#include <iostream>
#include "GradeBook.h"

using namespace std;

GradeBook::GradeBook(string name){
    setCourseName(name);
}

// function setCourseName ensures that the name has at most 25 characters 
void GradeBook::setCourseName(string name){
    if(name.size() <= 25)
        courseName = name;
    if(name.size() > 25){
        courseName = name.substr(0, 25);

        cerr << "Name \"" << name << "\" exceeds the maximum length (25).\n"
            << "Limiting courseName to first 25 characters.\n" << endl;
    }
}

string GradeBook::getCourseName() const {
    return courseName;
}

void GradeBook::displayMessage() const {
    cout << "Welcome to the grade book for\n" << getCourseName() 
        << "!" << endl;
}