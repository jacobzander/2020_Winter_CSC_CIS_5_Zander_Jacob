/* 
 * File:   main.cpp
 * Author: Jacob Zander
 * Created on January 27, 2020, 8:21 PM
 * Purpose:
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    bool isDone = false;
    
    while (!isDone) {
        float height, weight, jacketSize, waistSize;
        int age;
        cout << "Enter height(inches):\n"<<endl;
        cin >> height;
        cout << "Enter Weight(pounds):\n"<<endl;
        cin >> weight;
        cout << "Enter age:\n"<<endl;
        cin >> age;
        
        cout << "Hat size = " << setprecision(1) << fixed <<  (weight / height) * 2.9 << endl;
        jacketSize = (height * weight) / 288;
        if (age >= 30) {
            if (age >= 40 && age < 50) {
                jacketSize += (1 * 0.125);
            }
            if (age >= 50 && age < 60) {
                jacketSize = (2 * 0.125) + jacketSize;
            }
            if (age >= 60 && age < 70) {
                jacketSize = (3 * 0.125) + jacketSize;
            }        
            if (age >= 70 && age < 80) {
                jacketSize = (4 * 0.125) + jacketSize;
            }
            if (age >= 80 && age < 90) {
                jacketSize = (5 * 0.125) + jacketSize;
            }        
            if (age >= 90 && age < 100) {
                jacketSize = (6 * 0.125) + jacketSize;
            }        
            if (age >= 110 && age < 110) {
                jacketSize = (7 * 0.125) + jacketSize;
            }
        }
        cout << "Jacket size = " << setprecision(1) << fixed << jacketSize << endl;
        
        waistSize = (weight / 5.7);
        if (age > 29) {
            if ((age - 29) % 2 == 0.0f)
                waistSize += ((age - 29) / 2) * 0.1;
        }
        
        cout << "Waist size = " << setprecision(1) << fixed << waistSize << endl << endl;
        
        cout << "Run again:" << endl;
        unsigned char f;
        cin >> f;
        
        if (f == 'y') {
            isDone = false;
            cout << endl;
        }
        else if (f == 'n')
            isDone = true;
        
    }
    return 0;
}


