/* 
 * File:   main.cpp
 * Author: Jacob Zander
 * Created on January 12, 2020, 2:06 PM
 * Purpose:
 */

//System Libraries
#include <iostream>
using namespace std;

const char CUR = '$';

int main(int argc, char** argv) {
    float payAmount = 2200.0, annualPay;
    int payPeriods = 26;

    annualPay = payAmount*payPeriods;

    cout << CUR << annualPay << endl;
    return 0;
}


