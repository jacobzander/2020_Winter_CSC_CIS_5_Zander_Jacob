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
    int num = 0;
    string romanNum;
    //Initialize Variables
    cout << "Enter a number between 1 and 10:" << endl;
    cin >> num;
    if (num < 1 || num > 10) {
        cout << "Entered number is not valid, reenter number:\n";
        cin >> num;
    }
    //Process or map Inputs to Outputs
    switch (num) {
        case 1:
            romanNum = "I";
            break;
        case 2:
            romanNum = "II";
            break;
        case 3:
            romanNum = "III";
            break;
        case 4:
            romanNum = "IV";
            break;
        case 5:
            romanNum = "V";
            break;
        case 6:
            romanNum = "VI";
            break;
        case 7:
            romanNum = "VII";
            break;
        case 8:
            romanNum = "VIII";
            break;
        case 9:
            romanNum = "IX";
            break;
        case 10:
            romanNum = "X";
            break;
        default:
            break;
    }
    //Display Outputs
    cout << num << " is " << romanNum << " in Roman numerals";
    //Exit stage right!
    return 0;
}