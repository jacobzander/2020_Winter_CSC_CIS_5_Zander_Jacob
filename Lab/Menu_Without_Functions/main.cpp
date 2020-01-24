/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 21, 2020, 11:25 AM
 * Purpose:  Menu
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
    //Declare Variable Data Types and Constants
    unsigned char nProbs;//Number of problems in menu < 10
    unsigned char choose;//User's choice
    
    //Initialize values
    nProbs='3';
    
    //Loop on menu and problems
    do{
        //Display the menu
        cout<<"Choose the Problem Solution to Display"<<endl;
        cout<<"1. Problem solution for 1"<<endl;
        cout<<"2. Problem solution for 2"<<endl;
        cout<<"3. Problem solution for 3"<<endl<<endl;
        cin>>choose;
        
        //Dependent upon the choice
        switch(choose){
            case '1':{
                cout<<"Place Solution to 1 Here!"<<endl<<endl;
                break;
            }
            case '2':{
                cout<<"Place Solution to 2 Here!"<<endl<<endl;
                break;
            }
            case '3':{
                cout<<"Place Solution to 3 Here!"<<endl<<endl;
                break;
            }
            default:cout<<"Exiting Menu"<<endl;
        }
    }while(choose<=nProbs);

    //Exit stage right!
    return 0;
}