/* 
 * File:   main.cpp
 * Author: Jacob Zander
 * Created on January 12, 2020, 1:38 PM
 * Purpose:
 */

// System Libraries
#include <iostream>

// Global Constants
const char CUR = '$';
const float TAX = .07;

using namespace std;

int main(int argc, char** argv) {
    // Variables
    float item1 = 15.95, item2 = 24.95, item3 = 6.95, item4 = 12.95, item5 = 3.95, subTotal, taxTotal, total;
    
    // The total of all the items before tax
    subTotal = item1 + item2 + item3 + item4 + item5;

    // The total amount of sales tax on the transaction
    taxTotal = subTotal*TAX;

    // Total for the transaction
    total = subTotal + taxTotal;

    cout << CUR << item1 << endl;
    cout << CUR << item2 << endl;
    cout << CUR << item3 << endl;
    cout << CUR << item4 << endl;
    cout << CUR << item5 << endl;
    cout << "Subtotal: " << CUR << subTotal << endl;
    cout << "Sales Tax: " << CUR << taxTotal << endl;
    cout << "Total: " << CUR << total << endl;

    return 0;
}


