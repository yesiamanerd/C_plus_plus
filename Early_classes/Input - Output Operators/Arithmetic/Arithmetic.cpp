#include <iostream>

using namespace std;

int main(){
    double number1, number2;
    cout << "Please enter 2 numbers: ";
    cin >> number1; 
    cin >> number2;

    cout << "Sum: " << number1 + number2 << endl;
    if(number1 > number2)
        cout << "Difference: " << number1 - number2 << endl;
    else 
        cout << "Difference: " << number2 - number1 << endl;
    cout << "Product: " << number1 * number2 << endl;
    if(number2 != 0)
        cout << "Quotient: " << number1 / number2 << endl;
    else 
        cout << "Cannot divide by zero." << endl;
}