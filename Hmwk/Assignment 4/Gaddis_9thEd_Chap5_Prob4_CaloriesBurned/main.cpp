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
    float cals;
    int min;
    //Initialize Variables
    cout << "Enter how many calories are burned per minute:\n";
    cin >> cals;
    //Process or map Inputs to Outputs
    cout << "Min\tCalories burned\n";
    for (min = 5; min <= 30; min = min + 5) {
        cout << min << "\t" << setprecision(1) << fixed << cals * min << endl;
    }
    //Display Outputs

    //Exit stage right!
    return 0;
}