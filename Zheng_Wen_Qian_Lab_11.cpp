//Wen Qian Zheng
//November 12th, 2024
//Lab 11

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 50; // sets array size at 50
    double alpha[ARRAY_SIZE], beta[100], sum = 0; // makes two different arrays (alpha and beta), sets variable sum at 0
    int hundreds = 0; // variable used later for checks on how many 100 are in the array
    //alpha
    for(int iteration = 0; iteration < ARRAY_SIZE; iteration++) // for iteration < 50, iteration increases by 1
    {
        if (iteration < 25) // for the first 25 iterations, alpha[iteration] = iteration
            alpha[iteration] = pow(iteration, 2); // stores and takes the square of the #
        else
            alpha[iteration] = 3 * iteration; //else stores the triple instead
    }
    for(int iteration = 0; iteration < ARRAY_SIZE; iteration++) // for iteration < 50, iteration increases by 1
    {
        cout << alpha[iteration] << " "; // prints out the array
        if ((iteration + 1) % 10 == 0) // if iteration + 1 is divisible by 10, print out a new line
            cout << "\n"; // new line
    }
    // beta
    srand(time(0)); // seed randomization
    for(int iteration = 0; iteration < 100; iteration++) // for iteration < 100, iteration increases by 1
    {
        beta[iteration] = (rand() % 100) + 1; // stores a random number between 1 and 100 in the array
        sum += beta[iteration]; // adds the random number to the sum
        if (beta[iteration] == 100) // if the random number is 100, hundreds increases by 1
            hundreds++; // hundreds increases by 1
    }

    cout << "Average of array: " << sum/100 << endl; // prints out the average of the array
    cout << "Count of 100s: " << hundreds << endl; // prints out the count of 100s in the array

    return 0;
}

/*
0 1 4 9 16 25 36 49 64 81 
100 121 144 169 196 225 256 289 324 361 
400 441 484 529 576 75 78 81 84 87 
90 93 96 99 102 105 108 111 114 117 
120 123 126 129 132 135 138 141 144 147 
Average of array: 61.29
Count of 100s: 2
*/
