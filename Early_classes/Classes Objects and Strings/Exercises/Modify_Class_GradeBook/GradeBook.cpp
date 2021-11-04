// GradeBook member-function definitions.  This file contains 
// implementations of the member functions prototyped in GradeBook.h
#include <iostream>
#include "GradeBook.h"
using namespace std;

// constructor initializes courseName with string supplied as argument 
GradeBook::GradeBook(string courseName, string instructorName): 
    courseName(courseName), instructorName(instructorName){

}

void GradeBook::setCourseName(string name){
    courseName = name;
}

string GradeBook::getCourseName() const {
    return courseName;
}

void GradeBook::setInstructorName(string name){
    instructorName = name;
}

string GradeBook::getInstructorName() const {
    return instructorName;
}

void GradeBook::displayMessage() const {
    cout << "\nWelcome to the grade book for:\n" << getCourseName() 
        
        << "\nThis course is presented by: \n" << getInstructorName()
        << "!" << endl;
}