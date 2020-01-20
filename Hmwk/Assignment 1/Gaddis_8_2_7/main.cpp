/* 
 * File:   main.cpp
 * Author: Jacob Zander
 * Created on January 12, 2020, 2:01 PM
 * Purpose:
 */

//System Libraries
#include <iostream>
using namespace std;

const string UNIT = "mm";

int main(int argc, char** argv) {
    float increaseYearly = 1.5, fiveYears, sevenYears, tenYears;
    fiveYears = increaseYearly * 5;
    sevenYears = increaseYearly * 7;
    tenYears = increaseYearly * 10;

    cout << "Five Year Increase: " << fiveYears << UNIT << endl;
    cout << "Seven Year Increase: " << sevenYears << UNIT << endl;
    cout << "Ten Year Increase: " << tenYears << UNIT << endl;

    return 0;
}


