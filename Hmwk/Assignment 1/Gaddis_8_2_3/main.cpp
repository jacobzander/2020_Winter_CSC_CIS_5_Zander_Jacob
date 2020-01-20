/* 
 * File:   main.cpp
 * Author: Jacob Zander
 * Created on January 12, 2020, 2:27 PM
 * Purpose:
 */

//System Libraries
#include <iostream>
using namespace std;

const char CUR = '$';

int main(int argc, char** argv) {
    int subTotal = 95, totalTax = subTotal * 0.07, total = (subTotal * 0.07) + subTotal;

    cout << CUR << totalTax << endl;
    cout << CUR << total << endl;

    return 0;
}


