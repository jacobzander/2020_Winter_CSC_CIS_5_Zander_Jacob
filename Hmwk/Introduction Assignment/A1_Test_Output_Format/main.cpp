/*
 * File:
 * Author:
 * Date:
 * Purpose:
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here

int main(int argc, char** argv) {
    //Set random number seed here when needed

    //Declare variables or constants here
    //7 characters or less
    double num1, num2, num3, num4;
    //Initialize or input data here
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    //Display initial conditions, headings here

    //Process inputs  - map to outputs here

    //Format and display outputs here
    cout << std::setw(9) << num1 << std::setw(10) << std::showpoint << std::setprecision(2) << num1 << std::setw(10) << std::setprecision(3) << num1 << std::noshowpoint << std::endl;
    cout << std::setw(9) << num2 << std::setw(10) << std::showpoint << std::setprecision(2) << num2 << std::setw(10) << std::setprecision(3) << num2 << std::noshowpoint << std::endl;
    cout << std::setw(9) << num3 << std::setw(10) << std::showpoint << std::setprecision(2) << num3 << std::setw(10) << std::setprecision(3) << num3 << std::noshowpoint << std::endl;
    cout << std::setw(9) << num4 << std::setw(10) << std::showpoint << std::setprecision(2) << num4 << std::setw(10) << std::setprecision(3) << num4 << std::noshowpoint;
    //Clean up allocated memory here

    //Exit stage left
    return 0;
}