// (Invoice Class) 
// Create a class called Invoice that a hardware store might use to represent
// an invoice for an item sold at the store. 
// 
// An Invoice should include four data members—
// 1) a part number (type string)
// 2) a part description (type string)
// 3) a quantity of the item being purchased (type int) 
// 4) a price per item (type int). 
// [Note: In subsequent chapters, we’ll use numbers that contain
// decimal points (e.g., 2.75)—called floating-point values—to represent dollar amounts.] 

// Your class should have a constructor that initializes the four data members. 
// A constructor that receives multiple
// arguments is defined with the form:

// ClassName( TypeName1 parameterName1, TypeName2 parameterName2, ... )

// Provide a set and a get function for each data member. In addition, provide a member function
// named getInvoiceAmount that calculates the invoice amount (i.e., multiplies the quantity by the
// price per item), then returns the amount as an int value. If the quantity is not positive, it should be
// set to 0. If the price per item is not positive, it should be set to 0. Write a test program that demon-
// strates class Invoice’s capabilities.
#include <string>
#include <iostream>
#include "Invoice.h"

using namespace std;

int main(){
    Invoice invoiceItem1("123", "Thingy", 3, 5);
    cout << "The total amount due for item number: " << invoiceItem1.getPartNumber() << " Description: " 
        << invoiceItem1.getPartDescription() << " Qty: " << invoiceItem1.getQuantity() << " is $" 
        << invoiceItem1.getInvoiceAmount() << "\n" << endl;
    
    Invoice invoiceItem2("456", "Dipping Sauce", 24, -5);
    cout << "The total amount due for item number: " << invoiceItem2.getPartNumber() << " Description: " 
        << invoiceItem2.getPartDescription() << " Qty: " << invoiceItem2.getQuantity() << " is $" 
        << invoiceItem2.getInvoiceAmount() << "\n" << endl;
}