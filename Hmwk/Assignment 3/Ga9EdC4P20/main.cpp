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
    int const air = 1100, water = 4900, steel = 16400; // Feet per sec
    int medium;
    float time, distance;
    //Initialize Variables
    cout << "Choose which medium the sound wave will travel in." << endl;
    cout << "1.Air" << endl;
    cout << "2.Water" << endl;
    cout << "3.Steel" << endl;
    cin >> medium;
    cout << "Enter the distance the wave will travel:" << endl;
    cin >> distance;

    // Menu
    if (distance >= 0) {
        switch (medium) {
            case 1:
                time = distance / air;
                break;
            case 2:
                time = distance / water;
                break;
            case 3:
                time = distance / steel;
            default:
                break;
        }
    } else {
        cout << "Distances less than 0 are not accepted!\n";
    }


    //Display Outputs
    cout << "The wave will take " << fixed << setprecision(4) << time << " seconds";
    //Exit stage right!
    return 0;
}