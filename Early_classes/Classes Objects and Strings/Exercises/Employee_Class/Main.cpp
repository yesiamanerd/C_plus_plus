// (Employee Class) Create a class called Employee that includes three pieces of information as
// data members—a first name (type string), a last name (type string) and a monthly salary (type
// int). [Note: In subsequent chapters, we’ll use numbers that contain decimal points (e.g., 2.75)—
// called floating-point values—to represent dollar amounts.] Your class should have a constructor that
// initializes the three data members. Provide a set and a get function for each data member. If the
// monthly salary is not positive, set it to 0. Write a test program that demonstrates class Employee’s
// capabilities. Create two Employee objects and display each object’s yearly salary. Then give each Em-
// ployee a 10 percent raise and display each Employee’s yearly salary again.

#include <iostream>
#include <string>
#include "Employee.h" 

using namespace std;

int main(){
    Employee emp1("Tom", "Brooks", 5300);
    Employee emp2("John", "Tollet", -120);

    emp1.displayEmployee();
    emp2.displayEmployee();

    // correct salary
    emp2.setSalary(2300);

    // give 10% raise
    emp1.setSalary(emp1.getSalary() * 1.10);
    emp2.setSalary(emp2.getSalary() * 1.10);

    cout << endl;
    emp1.displayEmployee();
    emp2.displayEmployee();

}