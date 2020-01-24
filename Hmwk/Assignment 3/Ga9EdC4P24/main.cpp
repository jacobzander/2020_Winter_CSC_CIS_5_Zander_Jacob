/*
 * File:
 * Author:
 * Created on
 * Purpose:
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Set Random Number seed

    //Declare Variable Data Types and Constants
    float time, length, total;
    //Initialize Variables
    cout << "Enter the starting time:\n";
    cin >> time;
    if (time > 23.59 || time < 0) {
        cout << "Not a valid time, reenter:\n";
        cin >> time;
    }
    cout << "Enter the number of minutes of the call:\n";
    cin >> length;
    if (length > 59) {
        cout << "Not valid minutes, reenter:\n";
        cin >> length;
    }

    if (time >= 0 && time <= 06.59)
        total = length * 0.05;
    if (time >= 07.00 && time <= 19.00)
        total = length * 0.45;
    if (time >= 19.01 && time <= 23.59)
        total = length * 0.20;

    //Display Outputs
    cout << "The charges are $" << setprecision(2) << fixed << total;
    //Exit stage right!
    return 0;
}