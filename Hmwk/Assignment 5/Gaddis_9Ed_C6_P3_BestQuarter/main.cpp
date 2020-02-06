/* 
 * File:   main.cpp
 * Author: Jacob Zander
 * Created on January 28, 2020, 9:02 PM
 * Purpose:
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

float getSales(int, float);
void findHighest(float, float, float, float);

int main(int argc, char** argv) {

    int divison;
    float northEast, southEast, northWest, southWest, money;
    cout << "Enter the sales for Northeast division:$\n";
    cin >> money;
    northEast = getSales(1, money);
    cout << "Enter the sales for Southeast division:$\n";
    cin >> money;
    southEast = getSales(2, money);
    cout << "Enter the sales for Northwest division:$\n";
    cin >> money;
    northWest = getSales(3, money);
    cout << "Enter the sales for Southwest division:$\n";
    cin >> money;
    southWest = getSales(4, money);
    
    findHighest(northEast, southEast, northWest, southWest);
    
    return 0;
}

float getSales(int name, float money) {
    if (money < 0) {
        return 0;
    }
    return money;
}

void findHighest(float nE, float sE, float nW, float sW) {
    if (nE >= sE && nE >= nW && nE >= sW) {
        cout << "The Northeast division had the highest sales of $" << setprecision(2) << fixed << nE;
    }
    if (sE >= nE && sE >= nW && sE >= sW) {
        cout << "The Southeast division had the highest sales of $" << setprecision(2) << fixed << sE;
    }
    if (nW >= nE && nW >= sW && nW >= sW) {
        cout << "The Northwest division had the highest sales of $" << setprecision(2) << fixed << nW;
    }
    if (sW >= nE && sW >= sE && sW >= nW) {
        cout << "The Southwest division had the highest sales of $" << setprecision(2) << fixed << sW;
    }
    
}
