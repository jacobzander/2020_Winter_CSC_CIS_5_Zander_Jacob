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
    int l1, w1, l2, w2;
    //Initialize Variables
    cout << "Enter the width of rectangle 1:" << endl;
    cin >> w1;
    cout << "Enter the height of rectangle 1:" << endl;
    cin >> l1;
    cout << "Enter the width of rectangle 2:" << endl;
    cin >> w2;
    cout << "Enter the height of rectangle 2:" << endl;
    cin >> l2;
    //Process or map Inputs to Outputs
    if ((w1 * l1) > (w2 * l2))
        cout << "Rectangle 1 has the greater area";
    else if ((w1 * l1) < (w2 * l2))
        cout << "Rectangle 2 has the greater area";
    else if ((w1 * l1) == (w2 * l2))
        cout << "The rectangles have the same area";
    //Display Outputs

    //Exit stage right!
    return 0;
}