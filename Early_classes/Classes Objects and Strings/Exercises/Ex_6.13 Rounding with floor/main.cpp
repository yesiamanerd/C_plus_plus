// (Rounding Numbers) 
// An application of function floor is rounding a value to the nearest
// integer. 
// The statement:
//      y = floor( x + 0.5 );
// rounds the number x to the nearest integer and assigns the 
// result to y. 
// Write a program that reads several numbers and uses the 
// preceding statement to round each of these numbers to the nearest
// integer. 
// For each number processed, print both the original number 
// and the rounded number.
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