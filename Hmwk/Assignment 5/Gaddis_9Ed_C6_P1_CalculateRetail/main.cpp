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
float calculateRetail(float, float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    //Declare Variable Data Types and Constants
    float wholeSale, markupPercent;
    
    cout << "Enter the wholesale cost:\n";
    cin >> wholeSale;
    cout << "Enter the markup percentage:\n";
    cin >> markupPercent;
    cout << "The retail price is $" << setprecision(2) << fixed << calculateRetail(wholeSale, markupPercent);

    //Exit stage right!
    return 0;
}

float calculateRetail(float wholeSale, float markupPercent) {
    return ((markupPercent * 0.01f) * wholeSale) + wholeSale;
}