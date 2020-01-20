/*
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables
    float num1, num2, num3, num4, num5, average;
    //Initialize or input i.e. set variable values
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    cin >> num5;
    //Map inputs -> outputs
    average = (num1 + num2 + num3 + num4 + num5) / 5;
    //Display the outputs
    cout << "Input 5 numbers to average." << std::endl;
    cout << "The average = " << std::showpoint << std::setprecision(2) << average;
    //Exit stage right or left!
    return 0;
}