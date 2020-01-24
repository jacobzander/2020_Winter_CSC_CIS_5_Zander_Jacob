/* 
 * File:   main.cpp
 * Author: Jacob Zander
 * Created on January 24, 2020, 3:37 AM
 * Purpose:
 */

//System Libraries
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int num, sum, x;
    cout << "Enter a positive integer value:\n";
    cin >> num;
    //    if (num <= 0) {
    //        cout << "Enter a positive integer value:\n";
    //        cin >> num;
    //    }

    for (x = 1; x <= num; x++) {
        sum = sum + x;
    }

    cout << "The sum of all the integers from 1 to " << num << " is " << sum;
    return 0;
}


