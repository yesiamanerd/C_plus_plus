// Define class GradeBook with a member function that takes a parameter, 
// create a GradeBook object and call its displayMessage function.
#include <iostream>
#include <string> // uses C++ standard string class 
using namespace std;

class GradeBook {
    public: 
        void displayMessage(string courseName) const {
            cout << "Welcome to the grade book for \n" << courseName 
                 << "!" << endl;
        }

};

int main() {
    string nameOfCourse;
    GradeBook myGradebook;

    cout << "Please enter the course name:" << endl;
    getline (cin, nameOfCourse);
    cout << endl;

    myGradebook.displayMessage(nameOfCourse);
}