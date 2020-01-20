/* 
 * File:   main.cpp
 * Author: Jacob Zander
 * Created on January 12, 2020, 2:11 PM
 * Purpose:
 */

//System Libraries
#include <iostream>
using namespace std;

const char CUR = '$';
const float TAX = .0675;
const float TIP = 0.2;

int main(int argc, char** argv) {
    float subTotal = 88.67, taxAmount, tipAmount, total;
    taxAmount = subTotal*TAX;
    tipAmount = (taxAmount + subTotal) * TIP;
    total = subTotal + taxAmount + tipAmount;

    cout << "Meal cost: " << CUR << subTotal << endl;
    cout << "Tax Amount: " << CUR << taxAmount << endl;
    cout << "Tip Amount: " << CUR << tipAmount << endl;
    cout << "Total: " << CUR << total << endl;
    return 0;
}


