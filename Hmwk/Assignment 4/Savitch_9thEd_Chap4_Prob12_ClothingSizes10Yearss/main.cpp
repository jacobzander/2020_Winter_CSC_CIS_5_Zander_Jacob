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
        float height, weight, jacketSize, waistSize, jacketSize10, waistSize10;
        int age, age10;
        cout << "Enter height(inches):\n"<<endl;
        cin >> height;
        cout << "Enter Weight(pounds):\n"<<endl;
        cin >> weight;
        cout << "Enter age:\n"<<endl;
        cin >> age;
        
        // Creating age in 10 years
        age10 = age + 10;
        
        // Hat Size
        cout << "Hat size = " << setprecision(1) << fixed <<  (weight / height) * 2.9 << endl;
        
        // Original Jacket Size
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
        
        // 10 Years Jacket Size
        jacketSize10 = (height * weight) / 288;
        if (age10 >= 30) {
            if (age10 >= 40 && age10 < 50) {
                jacketSize10 += (1 * 0.125);
            }
            if (age10 >= 50 && age10 < 60) {
                jacketSize10 = (2 * 0.125) + jacketSize10;
            }
            if (age10 >= 60 && age10 < 70) {
                jacketSize10 = (3 * 0.125) + jacketSize10;
            }        
            if (age10 >= 70 && age10 < 80) {
                jacketSize10 = (4 * 0.125) + jacketSize10;
            }
            if (age10 >= 80 && age10 < 90) {
                jacketSize10 = (5 * 0.125) + jacketSize10;
            }        
            if (age10 >= 90 && age10 < 100) {
                jacketSize10 = (6 * 0.125) + jacketSize10;
            }        
            if (age10 >= 110 && age10 < 110) {
                jacketSize10 = (7 * 0.125) + jacketSize10;
            }
        }
        cout << "Jacket size in 10 years = " << setprecision(1) << fixed << jacketSize10 << endl;
        
        // Waist Size Original
        waistSize = (weight / 5.7);
        if (age > 29) {
            if ((age - 29) % 2 == 0.0f) {
                waistSize += ((age - 29) / 2) * 0.1;
            } else if ((age - 29) % 2 == 1.0f) {
                waistSize += (((age - 29) - 1) / 2) * 0.1f;
            }
        }
        cout << "Waist size = " << setprecision(1) << fixed << waistSize << endl;
        
        // Waist Size 10 Years
        waistSize10 = (weight / 5.7);
        if (age10 > 29) {
            if((age10 - 29) % 2 == 0.0f) {
                waistSize10 += ((age10 - 29) / 2) * 0.1f;
            } else if ((age10 - 29) % 2 == 1.0f) {
                waistSize10 += (((age10 - 29) - 1) / 2) * 0.1f;
            }
        }
        cout << "Waist size in 10 years = " << setprecision(1) << fixed << waistSize10 << endl << endl;
        
        // Repeat Question
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
