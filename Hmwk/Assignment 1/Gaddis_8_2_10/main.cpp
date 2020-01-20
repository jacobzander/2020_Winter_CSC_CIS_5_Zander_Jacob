/* 
 * File:   main.cpp
 * Author: Jacob Zander
 * Created on January 12, 2020, 1:30 PM
 * Purpose:
 */

//System Libraries
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    short int tank, range, mpg;
    tank = 15;
    range = 375;
    mpg = range / tank;

    cout << "Tank Capacity: " << tank << " gallons" << endl;
    cout << "Range: " << range << " miles" << endl;
    cout << "MPG: " << mpg << " miles per gallon" << endl;
    return 0;

}


