/* 
 * File:   main.cpp
 * Author: Jacob Zander
 *
 * Created on January 8, 2020, 1:24 AM
 * Purpose:  Military Budget Percentage of Federal Budget
 */

//System Libraries
#include <iostream>
using namespace std;

/*
 * Outputs the military budget as a percentage of the federal budget
 */
int main(int argc, char** argv) {
    //Declaring Variable Data Types
    float milBdgt,fedBdgt,mlPrcnt;
    //Initialize Variables
    milBdgt=7.0e11f;    //Military Budget = 700 Billion*
    fedBdgt=4.1e12f;    //Federal Budget  = 4.1 Trillion
    mlPrcnt=milBdgt/fedBdgt*100; //Military Percentage of Federal Budget
    
    cout<<"Federal Budget  = $"<<fedBdgt<<endl;
    cout<<"Military Budget = $"<<milBdgt<<endl;
    cout<<"Military Budget = "<<mlPrcnt<<"%"<<endl;
    
    //Display Outputs
    
    //*Number may not be accurate
    //Program Exit
    return 0;
}

