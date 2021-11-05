#include <string>
#include <iostream>
#include "Invoice.h"

using namespace std;

Invoice::Invoice(string partNo, string partDesc, int qty, int price)
    : partNumber(partNo), partDescription(partDesc), quantity(qty){
        setPrice(price);
}

void Invoice::setPartNumber(string number){
    partNumber = number;
}

string Invoice::getPartNumber(){
    return partNumber;
}

void Invoice::setPartDescription(string partDesc){
    partDescription = partDesc;
}

string Invoice::getPartDescription(){
    return partDescription;
}

void Invoice::setQuantity(int qty){
    quantity = qty;
}

int Invoice::getQuantity(){
    return quantity;
}

void Invoice::setPrice(int amount){
    if(amount < 0){
        price = 0;
    } else {
        price = amount;
    }
}

int Invoice::getPrice(){
    return price;
}

int Invoice::getInvoiceAmount(){
    return quantity * price;
}