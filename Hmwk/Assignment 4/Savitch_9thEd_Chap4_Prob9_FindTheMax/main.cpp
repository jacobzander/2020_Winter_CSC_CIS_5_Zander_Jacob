/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float num1, num2, num3, max;
    //Initialize or input i.e. set variable values
    cout<<"Enter first number:"<<endl<<endl;
    cin>>num1;
    cout<<"Enter Second number:"<<endl<<endl;
    cin>>num2;
    cout<<"Enter third number:"<<endl<<endl;
    cin>>num3;
    
    max = num1;
    if(num2 > max) {
        max = num2;
    }
    cout << "Largest number from two parameter function:\n";
    cout << max << endl << endl;
    
    if(num3 > max) {
        max = num3;
    }
    cout << "Largest number from three parameter function:\n";
    cout << max << endl;
    //Display the outputs

    //Exit stage right or left!
    return 0;
}