#include <string>


class Employee {
    public:
        explicit Employee(std::string, std::string, int);
        void setFirstName(std::string);
        std::string getFirstName();
        void setLastName(std::string);
        std::string getLastName();
        void setSalary(int);
        int getSalary();
        void displayEmployee();
    private: 
        std::string firstName;
        std::string lastName;
        int monthlySalary;
};