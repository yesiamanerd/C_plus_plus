// Define class GradeBook that contains a courseName data member 
// and member functions to set and get its value;
// Create and manipulate a GradeBook object with these functions.
#include <iostream>
#include <string> // uses C++ standard string class 
using namespace std;

class GradeBook {
    public: 
        void setCourseName(string name){
            courseName = name;
        }

        string getCourseName() const {
            return courseName;
        }

        void displayMessage() const {
            cout << "Welcome to the grade book for \n" << getCourseName()  
                 << "!" << endl;
        }
    private: 
        string courseName;

};

int main() {
    string nameOfCourse;
    GradeBook myGradebook;

    // display inital value of courseName 
    cout << "Initial course name is: " << myGradebook.getCourseName() << endl;

    cout << "Please enter the course name:" << endl;
    getline (cin, nameOfCourse);
    myGradebook.setCourseName(nameOfCourse);
    cout << endl;

    myGradebook.displayMessage();
}