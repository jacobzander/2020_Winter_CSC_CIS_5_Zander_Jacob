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
    int speed, hours;
    //Initialize Variables
    cout<<"What is the speed of the vehicle in mph?\n";
    cin>>speed;
    cout<<"How many hours has it traveled?\n";
    cin>>hours;
    
    cout<<"Hour   Distance Traveled\n";
    for (int x = 1; x <= hours; x++) {
        cout<<x<<setw(15)<<speed*x<<endl;
    }
    //Exit stage right!
    return 0;
}