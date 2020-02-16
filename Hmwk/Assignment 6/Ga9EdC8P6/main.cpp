/* 
 * File:   main.cpp
 * Author: Jacob Zander
 * Created on February 10, 2020, 11:23 PM
 * Purpose:
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
bool binSrchStr(string [],int,string,int&);//Find the element in the array
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    const int NUM_NAMES=20;
	string names[NUM_NAMES]={"Collins, Bill", "Smith, Bart", "Allen, Jim",
							 "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
							 "Taylor, Terri", "Johnson, Jill",
							 "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
							 "James, Jean", "Weaver, Jim", "Pore, Bob",
							 "Rutherford, Greg", "Javens, Renee",
							 "Harrison, Rose", "Setzer, Cathy",
							 "Pike, Gordon", "Holland, Beth" };
    string val;
    int atemps;
    //Initialize Variables
    cout << "Enter a name to search for:\n";
    cin >> val;
    bool isFound = binSrchStr(names, NUM_NAMES, val, atemps);
    //Process or map Inputs to Outputs
    
    //Display Outputs
    if(isFound)
        cout << "The name was found" << atemps;
    else
        cout << "The name was not found" << atemps;
    //Exit stage right!
    return 0;
}

bool binSrchStr(string a[],int n,string val,int &amtWrk){
    //Declare variables
    int low=0;
    int high=n-1;
    bool found=false;
    amtWrk=0;
    do{
        int middle=(high+low)/2;
        if((a[middle])==val){
            found=true;
        }else if((a[middle])<val){
            low=middle+1;
        }else{
            high=middle-1;
        }
        amtWrk++;
    }while(low<=high&&!found);
    return found;
}
