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
    int temp;
    //Initialize Variables
    cout << "Enter a temperature:\n";
    cin >> temp;
    //Process or map Inputs to Outputs
    // Freezing
    if (temp <= -173)
        cout << "Ethyl will freeze\n";
    if (temp <= -38)
        cout << "Mercury will freeze\n";
    if (temp <= 32)
        cout << "Water will freeze\n";
    if (temp <= -362)
        cout << "Oxygen will freeze\n";
    // Boil
    if (temp >= 172)
        cout << "Ethyl will boil\n";
    if (temp >= 676)
        cout << "Mercury will boil\n";
    if (temp >= 212)
        cout << "Water will boil\n";
    if (temp >= -306)
        cout << "Oxygen will boil\n";
    //Exit stage right!
    return 0;
}