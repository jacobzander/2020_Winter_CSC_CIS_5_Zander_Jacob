/* 
 * File:   main.cpp
 * Author: Jacob Zander
 * Created on January 29, 2020, 6:01 PM
 * Purpose:
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

void getScore(int&, int&, int&, int&, int&);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main(int argc, char** argv) {
    int num1, num2, num3, num4, num5;
    
    getScore(num1, num2, num3, num4, num5);
    calcAverage(num1, num2, num3, num4, num5);

    return 0;
}

void getScore(int& num1, int& num2, int& num3, int& num4, int& num5) {
    cout << "Enter a test score:\n";
    cin >> num1;  
    cout << "Enter a test score:\n";
    cin >> num2;
    cout << "Enter a test score:\n";
    cin >> num3;
    cout << "Enter a test score:\n";
    cin >> num4;
    cout << "Enter a test score:\n";
    cin >> num5;
}

void calcAverage(int num1, int num2, int num3, int num4, int num5) {
    float average = num1 + num2 + num3 + num4 + num5 - findLowest(num1, num2, num3, num4, num5);
    average /= 4;
    cout << "The average is " << setprecision(1) << fixed << average;
    
}

int findLowest(int num1, int num2, int num3, int num4, int num5) {
    if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5)
        return num1;
    if (num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5)
        return num2;
    if (num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5)
        return num3;
    if (num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5)
        return num4;
    if (num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4)
        return num5;    
}
