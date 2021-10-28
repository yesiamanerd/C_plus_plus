// (Diameter, Circumference and Area of a Circle) Write a program that reads in the radius of
// a circle as an integer and prints the circle’s diameter, circumference and area. Use the constant value
// 3.14159 for π. Do all calculations in output statements. [Note: In this chapter, we’ve discussed only
// integer constants and variables. In Chapter 4 we discuss floating-point numbers, i.e., values that can
// have decimal points.]
#include <iostream>

using namespace std;

int main(){
    int radius;
    double pi = 3.14159;

    cout << "Please enter the radius of the circle: ";
    cin >> radius;

    cout << "Diameter: " << 2 * radius << endl;
    cout << "Circumference: " << 2 * pi * radius << endl;
    cout << "Area: " << pi * radius * radius << endl;

    return 0; 
}