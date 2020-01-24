/*
 * File:
 * Author:
 * Created on
 * Purpose:
 */

//System Libraries
#include <iostream>
#include <math.h>
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
    int menu;
    const float pi = 3.14159;
    //Initialize Variables
    cout << "Geometry Calculator\n";
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the Area of a Triangle\n";
    cout << "4. Quit\n";
    cin >> menu;
    if (menu < 1 || menu > 4) {
        cout << "Invalid entry, Reenter:";
        cin >> menu;
    }

    switch (menu) {
        case 1:
            float r;
            cout << "Enter the radius of the circle:\n";
            cin >> r;
            if (r < 0) {
                cout << "Invalid entry, Reenter:\n";
                cin >> r;
            } else {
                cout << "The area of the circle is " << setprecision(1) << fixed << pi * pow(r, 2);
            }
            break;
        case 2:
            float rL, rH;
            cout << "Enter the length of the rectangle:\n";
            cin >> rL;
            if (rL < 0) {
                cout << "Invalid entry, Reenter:\n";
                cin >> rL;
            }
            cout << "Enter the height of the rectangle:\n";
            cin >> rH;
            if (rH < 0) {
                cout << "Invalid entry, Reenter:\n";
                cin >> rH;
            }
            cout << "The area of the rectangle is " << setprecision(1) << fixed << rL * rH;
            break;
        case 3:
            float base, height;
            cout << "Enter the base of the triangle:\n";
            cin >> base;
            if (base < 0) {
                cout << "Invalid entry, Reenter:\n";
                cin >> base;
            }
            cout << "Enter the height of the triangle:\n";
            cin >> height;
            if (height < 0) {
                cout << "Invalid entry, Reenter:\n";
                cin >> height;
            }
            cout << "The area of the triangle is " << setprecision(1) << fixed << base * height * 0.5;
        case 4:
            break;
        default:
            break;
    }
    //Process or map Inputs to Outputs

    //Display Outputs

    //Exit stage right!
    return 0;
}