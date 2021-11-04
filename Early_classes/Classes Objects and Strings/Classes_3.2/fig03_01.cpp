// Define a class Gradebook with a member function displayMessage,
// create a GradeBook object, and call its displayMessage function.
#include <iostream>

using namespace std;

// Gradebook class definition
class GradeBook {
    public: 
        // function that displays a welcome message to the GradeBook user
        void displayMessage() const {
            cout << "Welcome to the Grade Book!" << endl;
        }


};

int main() {
    GradeBook myGradebook; 
    myGradebook.displayMessage();
}