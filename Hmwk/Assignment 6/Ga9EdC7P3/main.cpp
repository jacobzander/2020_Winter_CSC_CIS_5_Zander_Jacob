/* 
 * File:   main.cpp
 * Author: Jacob Zander
 * Created on February 10, 2020, 10:49 PM
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
    string salsaNames[5][5] = {"mild", "medium", "sweet", "hot", "zesty"};
    float salsaSales[5][5];
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    int i = 0;
    string salsa;
    for (int i = 0; i < 5; i++) {
        salsa = salsaNames[i][0];
        cout << "Enter the sales of " << salsa << " salsa:$" << endl;
        cin >> salsaSales[i][0];
        i++;
    }
    //Display Outputs
    for (float *sale : salsaSales) {
        
    }
    //Exit stage right!
    return 0;
}


