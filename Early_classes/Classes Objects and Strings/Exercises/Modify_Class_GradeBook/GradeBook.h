// GradeBook class definition. This file presents GradeBook's public
// interface without revealing the implementation of GRadeBook's member  
// functions, with are defined in GradeBook.cpp
#include <string>

class GradeBook{
    public:
        explicit GradeBook(std::string, std::string);
        void setCourseName(std::string);
        std::string getCourseName() const;
        void displayMessage() const;
        void setInstructorName(std::string);
        std::string getInstructorName() const;
    private:
        std::string courseName;
        std::string instructorName;
};