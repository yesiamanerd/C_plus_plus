// (Account Class) Create an Account class that a bank might use 
// to represent customers’ bank accounts. 
// Include a data member of type int to represent the account balance. 
//
// [Note: In subsequent chapters, we’ll use numbers that contain decimal 
// points (e.g., 2.75)—called floating-point values— to represent 
// dollar amounts.] 
//
// Provide a constructor that receives an initial balance and uses it 
// to initialize the data member. 
// The constructor should validate the initial balance to ensure 
// that it’s greater than or equal to 0. 
// If not, set the balance to 0 and display an error message indicating 
// that the initial balance was invalid.

// Provide three member functions. 
// 1) Member function credit should add an amount to the current balance. 
// 2) Member function debit should withdraw money from the Account
// and ensure that the debit amount does not exceed the Account’s balance. 
// If it does, the balance should be left unchanged and the function 
// should print a message indicating "Debit amount exceeded account balance." 
// 3) Member function getBalance should return the current balance. 
// Create a program that creates two Account objects and tests 
// the member functions of class Account.
#include <iostream>
#include "Account.h"
using namespace std;

int main(){

    // Happy Path
    cout << "Account 1" << endl;
    Account account1(3);
    account1.credit( 10);
    account1.debit(5);
    cout << "account1 has a balance of: $" << account1.getBalance() << "\n" << endl;



    // Cloudy Path
    cout << "Account 2" << endl;
    Account account2(-234);
    account2.credit( -10);
    account2.debit(-5);
    account2.debit(5);
    cout << "account1 has a balance of: $" << account2.getBalance() << "\n" << endl;


}