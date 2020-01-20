/* 
 * File:   main.cpp
 * Author: Jacob Zander
 * Created on January 12, 2020, 2:23 PM
 * Purpose:
 */

//System Libraries
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int num1 = 28, num2 = 32, num3 = 37, num4 = 24, num5 = 33, sum, average;
    sum = num1 + num2 + num3 + num4 + num5;
    average = sum / 5;

    cout << "Average: " << average << endl;
    return 0;
}


