// GradeBook class definition. This file presents GradeBook's public
// interface without revealing the implementation of GRadeBook's member  
// functions, with are defined in GradeBook.cpp
#include <string>

class GradeBook{
    public:
        explicit GradeBook(std::string);
        void setCourseName(std::string);
        std::string getCourseName() const;
        void displayMessage() const;
    private:
        std::string courseName;
};