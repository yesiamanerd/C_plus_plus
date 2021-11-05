// Randomizing the die-rolling program 
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(){
    // unsigned int seed = 0;
    // cout << "Enter seed: ";
    // cin >> seed;
    // srand(seed);
    time_t result = time(nullptr);
    cout << "seed is: " << result << endl;

    srand(result);

    for( unsigned int counter = 1; counter <= 10; ++counter){
        // pick a number from 1 to 6 and output it
        cout << setw(10) << (1 + rand() % 6);

        // if counter is divisible by 5, start a new line
        if (counter % 5 == 0) 
            cout << endl;
    }

}

// This will differ each time according to the seed entered:
// Enter seed: 65432
//          4         1         4         6         5
//          5         2         6         3         1
// Enter seed: 44
//          3         4         4         5         3
//          4         4         2         3         6
// Same seed will produce same results:
// Enter seed: 44
//          3         4         4         5         3
//          4         4         2         3         6
// 
// Using epoch time as a seed completes the randomizing:
// seed is: 1636134864
//          4         3         6         5         3
//          3         1         1         4         3
// seed is: 1636134870
//          6         2         5         5         4
//          1         1         5         2         5         