/* 
 * File:   main.cpp
 * Author: Jacob Zander
 * Created on January 27, 2020, 11:51 PM
 * Purpose:
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    const float dollar = 1.00, quarter = 0.25, dime = 0.10, nickle = 0.05;
    float amount = 0.00f, change = 0.00f;
    while (amount < 3.50) {
        int number;
        cout << "List of coins:\n1. Nickel\n2. Dime\n3. Quarter\n4. Dollar\nEnter number for coin:\n\n";
        cin >> number;
        switch(number) {
            case 1:
                amount += nickle;
                break;
            case 2:
                amount += dime;
                break;
            case 3:
                amount += quarter;
                break;
            case 4:
                amount += dollar;
                break;
            default:
                break;
        }
        cout << "Current amount: $" << setprecision(2) << fixed << amount << endl;
        if (amount >= 3.50) {
            change = amount - 3.50;
        }
    }
    cout << "Enjoy your deep-fried twinkie\nChange to be returned: $" << setprecision(2) << fixed << change << endl;
    
    return 0;
}


