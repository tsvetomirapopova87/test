
// C++ program to find simple interest 
// for given principal amount, time 
// and rate of interest.
#include "DynamicLib.h"

// Driver code
int simple_interest()
{
    // We can change values here for
    // different inputs
    float P = 1, R = 1, T = 1;

    // Calculate simple interest 
    float SI = (P * T * R) / 100;

    // Print the resultant value of SI 
    cout << "Simple Interest = " << SI;

    return 0;
}