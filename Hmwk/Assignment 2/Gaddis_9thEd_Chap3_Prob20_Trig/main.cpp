/*
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <math.h>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
#define PI 3.14159265
//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Set the random number seed

    //Declare Variables
    float angle, sinNum, cosNum, tanNum;
    //Initialize or input i.e. set variable values
    cout << "Calculate trig functions" << endl;
    cout << "Input the angle in degrees." << endl;
    cin >> angle;
    //Map inputs -> outputs
    sinNum = sin(angle * PI / 180);
    cosNum = cos(angle * PI / 180);
    tanNum = tan(angle * PI / 180);
    //Display the outputs
    cout << setprecision(4) << "sin(" << angle << ") = " << std::showpoint << sinNum << std::noshowpoint << endl;
    cout << "cos(" << angle << ") = " << std::showpoint << cosNum << std::noshowpoint << endl;
    cout << "tan(" << angle << ") = " << std::showpoint << std::fixed << tanNum;
    //Exit stage right or left!
    return 0;
}