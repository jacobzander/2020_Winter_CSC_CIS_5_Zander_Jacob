/* 
 * File:   main.cpp
 * Author: Jacob Zander
 * Created on January 29, 2020, 5:45 PM
 * Purpose:
 */

//System Libraries
#include <iostream>
#include <math.h>
#include <iomanip> 
using namespace std;

float kineticEnergy(float, float);

int main(int argc, char** argv) {
    float mass, velocity;
    
    cout << "Enter the object's mass:\n";
    cin >> mass;
    cout << "Enter the object's velocity:\n";
    cin >> velocity;
    
    cout << "The object has " << setprecision(1) << fixed << kineticEnergy(mass, velocity) << " Joules of energy.";
    return 0;
}

float kineticEnergy(float m, float v) {
    float p;
    p = pow(v, 2);
    p = 0.5 * (p * m);
    return p;
}