/*
 * File:
 * Author:
 * Created on
 * Purpose:
 */

//System Libraries
#include <iostream>
#include <cmath>
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
    float mass, newtons;
    //Initialize Variables
    cout << "Enter the mass of an object:" << endl;
    cin >> mass;

    newtons = mass * 9.8;
    if (newtons < 10)
        cout << "The object is too light";
    else if (newtons > 1000)
        cout << "The object is too heavy";
    else
        cout << "The object weighs " << setprecision(1) << showpoint << fixed << newtons << " newtons";
    //Process or map Inputs to Outputs

    //Display Outputs

    //Exit stage right!
    return 0;
}