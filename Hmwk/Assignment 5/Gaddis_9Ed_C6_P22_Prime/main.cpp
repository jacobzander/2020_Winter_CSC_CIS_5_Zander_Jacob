/* 
 * File:   main.cpp
 * Author: Jacob Zander
 * Created on January 29, 2020, 9:51 PM
 * Purpose:
 */

//System Libraries
#include <iostream>
using namespace std;

bool isPrime(int);

int main(int argc, char** argv) {
    int num;
    cout << "Enter a number:\n";
    cin >> num;
    if (isPrime(num)) {
        cout << num << " is a prime number.";
    } else {
        cout << num << " is not a prime number.";
    }
    return 0;
}

bool isPrime(int num) {
    int count = 0;
    if (num == 0) {
        return false;
    } else {
        for(int i = 2; i < num; i++) {
            if (num % i == 0)
                count++;
        }
        if (count > 1)
            return false;
        else 
            return true;
    }
}
