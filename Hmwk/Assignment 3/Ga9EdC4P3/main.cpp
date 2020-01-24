/*
 * File:
 * Author:
 * Created on
 * Purpose:
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Set Random Number seed

    //Declare Variable Data Types and Constants
    int month, day, year;
    //Initialize Variables
    cout << "Enter a month:" << endl;
    cin >> month;
    cout << "Enter a day:" << endl;
    cin >> day;
    cout << "Enter a year:" << endl;
    cin >> year;
    //Process or map Inputs to Outputs
    if (month * day == year)
        cout << "The date is magic";
    else
        cout << "The date is not magic";
    //Display Outputs

    //Exit stage right!
    return 0;
}