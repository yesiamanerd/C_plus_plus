#include <iostream>

using namespace std;

int main(){
    // Write a program that asks the user to enter two integers, obtains the
    // numbers from the user, then prints the larger number followed by the words "is larger." If the
    // numbers are equal, print the message "These numbers are equal."
    int number1, number2;

    cout << "Please enter 2 integers: ";
    cin >> number1 >> number2;

    if(number1 > number2){
        cout << number1 << " is larger" << endl;
    } else if(number1 < number2){
        cout << number2 << " is larger" << endl;
    } else {
        cout << "These numbers are equal." << endl;    
    }


    return 0;
}