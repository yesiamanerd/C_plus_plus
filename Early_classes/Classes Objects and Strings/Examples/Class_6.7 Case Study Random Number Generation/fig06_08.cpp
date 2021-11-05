// 6 is a scaling factor to produce numbers from 1 to 6.
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main1(){
    for( unsigned int counter = 1; counter <= 20; ++counter){
        // pick a number from 1 to 6 and output it
        cout << setw(10) << (1 + rand() % 6);

        // if counter is divisible by 5, start a new line
        if (counter % 5 == 0) 
            cout << endl;
    }
}

// same "random" values every time it runs   
        //  6         6         5         5         6
        //  5         1         1         5         3
        //  6         6         2         4         2
        //  6         2         3         4         1