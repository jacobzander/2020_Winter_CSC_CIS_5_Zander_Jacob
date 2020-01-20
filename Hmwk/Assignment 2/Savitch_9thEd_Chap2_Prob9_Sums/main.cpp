/*
 * File:
 * Author:
 * Date:
 * Purpose:
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
#include <iomanip>
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
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
    int negativeSum, positiveSum, sum;
    //Initialize or input data here
    cout << "Input 10 numbers, any order, positive or negative" << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8 >> num9 >> num10;
    //Display initial conditions, headings here
    if (num1 <= 0) {
        negativeSum += num1;
    } else {
        positiveSum += num1;
    }
    sum += num1;
    if (num2 <= 0) {
        negativeSum += num2;
    } else {
        positiveSum += num2;
    }
    sum += num2;
    if (num3 <= 0) {
        negativeSum += num3;
    } else {
        positiveSum += num3;
    }
    sum += num3;
    if (num4 <= 0) {
        negativeSum += num4;
    } else {
        positiveSum += num4;
    }
    sum += num4;
    if (num5 <= 0) {
        negativeSum += num5;
    } else {
        positiveSum += num5;
    }
    sum += num5;
    if (num6 <= 0) {
        negativeSum += num6;
    } else {
        positiveSum += num6;
    }
    sum += num6;
    if (num7 <= 0) {
        negativeSum += num7;
    } else {
        positiveSum += num7;
    }
    sum += num7;
    if (num8 <= 0) {
        negativeSum += num8;
    } else {
        positiveSum += num8;
    }
    sum += num8;
    if (num9 <= 0) {
        negativeSum += num9;
    } else {
        positiveSum += num9;
    }
    sum += num9;
    if (num10 <= 0) {
        negativeSum += num10;
    } else {
        positiveSum += num10;
    }
    sum += num10;

    //Process inputs  - map to outputs here

    //Format and display outputs here
    cout << "Negative sum =" << setw(4) << negativeSum << endl;
    cout << "Positive sum =" << setw(4) << positiveSum << endl;
    cout << "Total sum    =" << setw(4) << sum << endl;
    //Clean up allocated memory here

    //Exit stage left
    return 0;
}



///*
// * File:
// * Author:
// * Date:
// * Purpose:
// * Version:
// */
//
////System Libraries - Post Here
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
////User Libraries - Post Here
//
////Global Constants - Post Here
////Only Universal Physics/Math/Conversions found here
////No Global Variables
////Higher Dimension arrays requiring definition prior to prototype only.
//
////Function Prototypes - Post Here
//
////Execution Begins Here
//
//int main(int argc, char** argv) {
//    //Set random number seed here when needed
//
//    //Declare variables or constants here
//    //7 characters or less
//    int nums [10] = {};
//    int negativeSum, positiveSum, sum;
//    //Initialize or input data here
//    cout << "Input 10 numbers, any order, positive or negative" << endl;
//    while ()
//    //Display initial conditions, headings here
//    for (int n = 0; n < 10; ++n) {
//        if (nums[n] <= 0) {
//            negativeSum += nums[n];
//        } else {
//            positiveSum += nums[n];
//        }
//        sum += nums[n];
//    }
//    //Process inputs  - map to outputs here
//
//    //Format and display outputs here
//    cout << "Negative sum =" << setw(4) << negativeSum << endl;
//    cout << "Positive sum =" << setw(4) << positiveSum << endl;
//    cout << "Total sum    =" << setw(4) << sum << endl;
//    //Clean up allocated memory here
//
//    //Exit stage left
//    return 0;
// }