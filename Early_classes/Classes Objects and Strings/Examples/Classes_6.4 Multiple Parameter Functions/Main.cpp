// Create GradeBook object, input grades and display grade report.
#include "GradeBook.h" 

int main(){
    GradeBook myGradebook("CS101 C++ Programming");

    myGradebook.displayMessage();
    myGradebook.inputGrades();
    myGradebook.displayGradeReport();
}