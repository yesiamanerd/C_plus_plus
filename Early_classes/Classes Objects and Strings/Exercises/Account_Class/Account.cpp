#include <iostream>
#include "Account.h"

using namespace std;

Account::Account(int startingBalance): accountBalance(startingBalance){
    if(startingBalance < 0){
        cout << "Initial balance is invalid.  Setting starting balance to zero\n" << endl;
        accountBalance = 0;
    }

    cout << "New account created with balance: $" << accountBalance << "\n" << endl;
}

void Account::credit(int depositAmount){
    if(depositAmount < 0){
        cout << "Invalid deposit amount." << endl;
        cout << "Please try again\n" << endl;
    } else {
        accountBalance += depositAmount;
    }
}

void Account::debit(int withdrawalAmount){
    if(withdrawalAmount < 0){
        cout << "Invalid withdraw amount. Please enter a positive value." << endl;
    }else if(withdrawalAmount > accountBalance){
        cout << "Invalid withdrawal amount.  There are not enough funds to cover the withdrawal\n" << endl;
    } else {
        accountBalance -= withdrawalAmount;
    }
}

int Account::getBalance() const {
    return accountBalance;
}

