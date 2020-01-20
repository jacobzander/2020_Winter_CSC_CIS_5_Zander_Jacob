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
    float newAnnual, monthly, retroPay, oldAnnual;

    //Initialize or input data here
    cout << "Input previous annual salary." << endl;
    cin >> oldAnnual;
    //Display initial conditions, headings here

    //Process inputs  - map to outputs here
    newAnnual = (oldAnnual * .076) + oldAnnual;
    retroPay = (newAnnual - oldAnnual) / 2;
    monthly = newAnnual / 12;
    //Format and display outputs here
    cout << fixed << setprecision(2) << showpoint << "Retroactive pay    = $" << setw(7) << retroPay << endl;
    cout << "New annual salary  = $" << setw(7) << newAnnual << endl;
    cout << "New monthly salary = $" << setw(7) << monthly;
    //Clean up allocated memory here

    //Exit stage left
    return 0;
}