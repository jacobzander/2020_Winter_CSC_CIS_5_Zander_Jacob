/* 
 * File:   main.cpp
 * Author: Jacob Zander
 * Created on February 10, 2020, 10:34 PM
 * Purpose:
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
void bubSrt(int [],int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int numArry[10];
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; i++) {
        cin >> numArry[i];
    }
    // Sorts the array
    bubSrt(numArry, 10);
    
    cout << numArry[9] << " is the highest number." << endl;
    cout << numArry[0] << " is the lowest number.";
    //Display Outputs

    //Exit stage right!
    return 0;
}

void bubSrt(int a[],int n){
    bool swapIt;
    do{
        swapIt=false;
        for(int i=1;i<n;i++){
            if(a[i-1]>a[i]){
                int temp=a[i-1];
                a[i-1]=a[i];
                a[i]=temp;
                swapIt=true;
            } 
        }
    }while(swapIt);
}