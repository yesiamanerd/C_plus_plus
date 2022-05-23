// Function template maximum test program 
#include <iostream> 
#include "maximum.h"
using namespace std;

int main(){

    // 1) Demonstrate maximum with int values 
    int int1 {49}, int2{67}, int3{23};
    cout << "The maximum integer is: " << maximum(int1, int2, int3) << endl;

    // 2. Demonstrate maximum with double values 
    double d1{56.23}, d2{234.92}, d3{5.00234202};
    cout << "The maximum double is: " << maximum(d1, d2, d3) << endl;

    // 3. Demonstrate maximum with chars
    char c1{'Y'}, c2{'8'}, c3{'d'};
    cout << "The maximum char is: " << maximum(c1, c2, c3) << endl;

    
}