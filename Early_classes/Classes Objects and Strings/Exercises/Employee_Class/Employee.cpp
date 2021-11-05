#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

Employee::Employee(string first, string last, int salary): firstName(first), lastName(last){
    setSalary(salary);
}

void Employee::setFirstName(string name){
    firstName = name;
}

string Employee::getFirstName(){
    return firstName;
}

void Employee::setLastName(string name){
    lastName = name;
}

string Employee::getLastName(){
    return lastName;
}

void Employee::setSalary(int amount){
    if(amount < 0){
        monthlySalary = 0;
    } else {
        monthlySalary = amount;
    }
}

int Employee::getSalary(){
    return monthlySalary;
}

void Employee::displayEmployee(){
    cout << firstName << " " << lastName << " " << monthlySalary << endl;
}