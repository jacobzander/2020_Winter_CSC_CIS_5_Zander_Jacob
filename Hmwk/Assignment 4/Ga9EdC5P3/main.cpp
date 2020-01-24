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
    int year;
    float seaLevel = 0, rise;
    //Initialize Variables
    cout << "Enter how many millimeters the ocean is rising per year:\n";
    cin >> rise;
    cout << "Year\tRise(mm)\n";
    for (year = 1; year <= 30; year++) {
        seaLevel = rise + seaLevel;
        cout << year << "\t" << setprecision(1) << fixed << seaLevel << endl;
    }
    //Process or map Inputs to Outputs

    //Display Outputs

    //Exit stage right!
    return 0;
}