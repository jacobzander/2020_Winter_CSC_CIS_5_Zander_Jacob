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
    const float lbToG = 453.59237;
    float weight;
    int limit;
    //Initialize or input data here

    //Display initial conditions, headings here
    cout << "Program to calculate the limit of Soda Pop Consumption." << endl;
    cout << "Input the desired dieters weight in lbs." << endl;
    //Process inputs  - map to outputs here
    cin >> weight;

    limit = ((weight * lbToG) / 7) / 0.35;
    //Format and display outputs here
    cout << "The maximum number of soda pop cans" << endl;
    cout << "which can be consumed is " << limit << " cans";
    //Clean up allocated memory here

    //Exit stage left
    return 0;
}