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
    int books, points;
    //Initialize Variables
    cout << "Enter how many books you purchased this month:" << endl;
    cin >> books;
    //Process or map Inputs to Outputs
    switch (books) {
        case 0:
            points = 0;
            break;
        case 1:
            points = 5;
            break;
        case 2:
            points = 15;
            break;
        case 3:
            points = 30;
            break;
        case 4:
            points = 60;
            break;
        default:
            points = 60;
            break;
    }
    //Display Outputs
    cout << "You earned " << points << " points.";
    //Exit stage right!
    return 0;
}