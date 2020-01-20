/*
 * File:
 * Author:
 * Date:
 * Purpose:
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here

int main(int argc, char** argv) {
    //Set random number seed here when needed

    //Declare variables or constants here
    //7 characters or less
    int limit, people;
    //Initialize or input data here
    cout << "Input the maximum room capacity and the number of people" << endl;
    cin >> limit;
    cin >> people;
    //Display initial conditions, headings here
    //Process inputs  - map to outputs here

    //Format and display outputs here
    if (limit < people) {
        cout << "Meeting cannot be held." << endl;
        cout << "Reduce number of people by " << people - limit << " to avoid fire violation.";
    } else {
        cout << "Meeting can be held." << endl;
        cout << "Increase number of people by " << limit - people << " will be allowed without violation.";
    }

    //Clean up allocated memory here

    //Exit stage left
    return 0;
}