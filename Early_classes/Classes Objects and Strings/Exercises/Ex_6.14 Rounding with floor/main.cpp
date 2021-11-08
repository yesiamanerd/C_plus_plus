// (Rounding Numbers) 
// Function floor can be used to round a number to a specific 
// decimal place. 
// The statement: 
//         y = floor( x * 10 + 0.5 ) / 10;
// rounds x to the tenths position 
// (the first position to the right of the decimal point). 

// The statement:
//         y = floor( x * 100 + 0.5 ) / 100;
// rounds x to the hundredths position 
// (the second position to the right of the decimal point). 
// Write a program that defines four functions to round a 
// number x in various ways:
// a) roundToInteger( number )
// b) roundToTenths( number )
// c) roundToHundredths( number )
// d) roundToThousandths( number )

// For each value read, your program should print the original value, 
// the number rounded to the nearest integer, the number rounded to 
// the nearest tenth, the number rounded to the nearest hundredth  
// and the number rounded to the nearest thousandth.

#include <iostream>
#include <random>
#include <iomanip>
using namespace std;

int main(){
    double num1{}, num2{}, num3{};
    double nums[3] = {num1, num2, num3};

    // print header columns
    cout << setw(10) << "Original"
         << "\tRounded" << endl;

    // assign random decimal values
    random_device rd;
    default_random_engine eng(rd());
    uniform_real_distribution<double> distr(0.0, 100.0);

    for(double num: nums) {
        num = distr(eng);
        cout << setw(10) 
             << setprecision(10)
             << num 
             << "\t" 
             << floor( num + 0.5 )
             << endl;
    }
}