// (Arithmetic, Smallest and Largest) Write a program that inputs three integers from the key-
// board and prints the sum, average, product, smallest and largest of these numbers. The screen dialog
// should appear as follows:
//
// Input three different integers: 13 27 14
// Sum is 54
// Average is 18
// Product is 4914
// Smallest is 13
// Largest is 27
#include <iostream>

using namespace std;

int main(){
    int num1, num2, num3;
    int smallest {};
    int largest {};

    cout << "Input three different integers: ";
    cin >> num1 >> num2 >> num3;

    cout << "Sum is " << num1 + num2 + num3 << endl;
    cout << "Average is " << (double)(num1 + num2 + num3)/3 << endl;
    cout << "Product is " << num1 * num2 * num3 << endl;
    
    smallest = num1;
    if(num2 < smallest) smallest = num2;
    if(num3 < smallest) smallest = num3;

    largest = num1;
    if(num2 > largest) largest = num2;
    if(num3 > largest) largest = num3;

    cout << "Smallest is " << smallest << endl;
    cout << "Largest is " << largest << endl;

    return 0;
}