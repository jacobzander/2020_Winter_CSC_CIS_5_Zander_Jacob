/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 21, 2020, 11:25 AM
 * Purpose:  Menu
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    unsigned char nProbs;//Number of problems in menu < 10
    unsigned char choose;//User's choice
    
    //Initialize values
    nProbs = '9';
    
    //Loop on menu and problems
    do{
        //Display the menu
        cout << "Choose the Problem Solution to Display" << endl;
        cout << "1. Problem solution for Minimum/Maximum" << endl;
        cout << "2. Problem solution for Roman Numeral Converter" << endl;
        cout << "3. Problem solution for Magic Dates" << endl;
        cout << "4. Problem solution for Area of Rectangles" << endl;
        cout << "5. Problem solution for Mass and Weight" << endl;
        cout << "6. Problem solution for Book Club Points" << endl;
        cout << "7. Problem solution for The Speed of Sound" << endl;
        cout << "8. Problem solution for Freezing and Boiling Points" << endl;
        cout << "9. Problem solution for Geometry Calculator" << endl << endl;
        cin>>choose;
        
        //Dependent upon the choice
        switch(choose) {
            case '1':
            {
                //Declare Variable Data Types and Constants
                int a, b;
                //Initialize Variables
                cout << "Enter a number:" << endl;
                cin >> a;
                cout << "Enter a number:" << endl;
                cin >> b;
                //Process or map Inputs to Outputs

                //Display Outputs
                (a > b) ? cout << a << " is larger" : cout << b << " is larger";
                break;
            }
            case '2':
            {
                //Declare Variable Data Types and Constants
                int num = 0;
                string romanNum;
                //Initialize Variables
                cout << "Enter a number between 1 and 10:" << endl;
                cin >> num;
                if (num < 1 || num > 10) {
                    cout << "Entered number is not valid, reenter number:\n";
                    cin >> num;
                }
                //Process or map Inputs to Outputs
                switch (num) {
                    case 1:
                        romanNum = "I";
                        break;
                    case 2:
                        romanNum = "II";
                        break;
                    case 3:
                        romanNum = "III";
                        break;
                    case 4:
                        romanNum = "IV";
                        break;
                    case 5:
                        romanNum = "V";
                        break;
                    case 6:
                        romanNum = "VI";
                        break;
                    case 7:
                        romanNum = "VII";
                        break;
                    case 8:
                        romanNum = "VIII";
                        break;
                    case 9:
                        romanNum = "IX";
                        break;
                    case 10:
                        romanNum = "X";
                        break;
                    default:
                        break;
                }
                //Display Outputs
                cout << num << " is " << romanNum << " in Roman numerals";
                break;
            }
            case '3':
            {
                int month, day, year;
                //Initialize Variables
                cout << "Enter a month:" << endl;
                cin >> month;
                cout << "Enter a day:" << endl;
                cin >> day;
                cout << "Enter a year:" << endl;
                cin >> year;
                //Process or map Inputs to Outputs
                if (month * day == year)
                    cout << "The date is magic";
                else
                    cout << "The date is not magic";
                break;
            }
            case '4':
            {
                //Declare Variable Data Types and Constants
                int l1, w1, l2, w2;
                //Initialize Variables
                cout << "Enter the width of rectangle 1:" << endl;
                cin >> w1;
                cout << "Enter the height of rectangle 1:" << endl;
                cin >> l1;
                cout << "Enter the width of rectangle 2:" << endl;
                cin >> w2;
                cout << "Enter the height of rectangle 2:" << endl;
                cin >> l2;
                //Process or map Inputs to Outputs
                if ((w1 * l1) > (w2 * l2))
                    cout << "Rectangle 1 has the greater area";
                else if ((w1 * l1) < (w2 * l2))
                    cout << "Rectangle 2 has the greater area";
                else if ((w1 * l1) == (w2 * l2))
                    cout << "The rectangles have the same area";
            }
            case '5':
            {
                //Declare Variable Data Types and Constants
                float mass, newtons;
                //Initialize Variables
                cout << "Enter the mass of an object:" << endl;
                cin >> mass;

                newtons = mass * 9.8;
                if (newtons < 10)
                    cout << "The object is too light";
                else if (newtons > 1000)
                    cout << "The object is too heavy";
                else
                    cout << "The object weighs " << setprecision(1) << showpoint << fixed << newtons << " newtons";
            }
            case '6':
            {
                //Declare Variable Data Types and Constants
                int books, points;
                //Initialize Variables
                cout << "Enter how many books you purchased this month:" << endl;
                cin >> books;
                //Process or map Inputs to Outputs
                switch (books) {
                    case 0:
                        points = 0;
                        break;
                    case 1:
                        points = 5;
                        break;
                    case 2:
                        points = 15;
                        break;
                    case 3:
                        points = 30;
                        break;
                    case 4:
                        points = 60;
                        break;
                    default:
                        points = 60;
                        break;
                }
                //Display Outputs
                cout << "You earned " << points << " points.";
            }
            case '7':
            {
                //Declare Variable Data Types and Constants
                int const air = 1100, water = 4900, steel = 16400; // Feet per sec
                int medium;
                float time, distance;
                //Initialize Variables
                cout << "Choose which medium the sound wave will travel in." << endl;
                cout << "1.Air" << endl;
                cout << "2.Water" << endl;
                cout << "3.Steel" << endl;
                cin >> medium;
                cout << "Enter the distance the wave will travel:" << endl;
                cin >> distance;

                // Menu
                if (distance >= 0) {
                    switch (medium) {
                        case 1:
                            time = distance / air;
                            break;
                        case 2:
                            time = distance / water;
                            break;
                        case 3:
                            time = distance / steel;
                        default:
                            break;
                    }
                } else {
                    cout << "Distances less than 0 are not accepted!\n";
                }


                //Display Outputs
                cout << "The wave will take " << fixed << setprecision(4) << time << " seconds";
            }
            case '8':
            {
                //Declare Variable Data Types and Constants
                int temp;
                //Initialize Variables
                cout << "Enter a temperature:\n";
                cin >> temp;
                //Process or map Inputs to Outputs
                // Freezing
                if (temp <= -173)
                    cout << "Ethyl will freeze\n";
                if (temp <= -38)
                    cout << "Mercury will freeze\n";
                if (temp <= 32)
                    cout << "Water will freeze\n";
                if (temp <= -362)
                    cout << "Oxygen will freeze\n";
                // Boil
                if (temp >= 172)
                    cout << "Ethyl will boil\n";
                if (temp >= 676)
                    cout << "Mercury will boil\n";
                if (temp >= 212)
                    cout << "Water will boil\n";
                if (temp >= -306)
                    cout << "Oxygen will boil\n";
                //Exit stage right!
                return 0;
            }
            case '9':
            {
            //Declare Variable Data Types and Constants
            int menu;
            const float pi = 3.14159;
            //Initialize Variables
            cout << "Geometry Calculator\n";
            cout << "1. Calculate the Area of a Circle\n";
            cout << "2. Calculate the Area of a Rectangle\n";
            cout << "3. Calculate the Area of a Triangle\n";
            cout << "4. Quit\n";
            cin >> menu;
            if (menu < 1 || menu > 4) {
                cout << "Invalid entry, Reenter:";
                cin >> menu;
            }

            switch (menu) {
                case 1:
                    float r;
                    cout << "Enter the radius of the circle:\n";
                    cin >> r;
                    if (r < 0) {
                        cout << "Invalid entry, Reenter:\n";
                        cin >> r;
                    } else {
                        cout << "The area of the circle is " << setprecision(1) << fixed << pi * pow(r, 2);
                    }
                    break;
                case 2:
                    float rL, rH;
                    cout << "Enter the length of the rectangle:\n";
                    cin >> rL;
                    if (rL < 0) {
                        cout << "Invalid entry, Reenter:\n";
                        cin >> rL;
                    }
                    cout << "Enter the height of the rectangle:\n";
                    cin >> rH;
                    if (rH < 0) {
                        cout << "Invalid entry, Reenter:\n";
                        cin >> rH;
                    }
                    cout << "The area of the rectangle is " << setprecision(1) << fixed << rL * rH;
                    break;
                case 3:
                    float base, height;
                    cout << "Enter the base of the triangle:\n";
                    cin >> base;
                    if (base < 0) {
                        cout << "Invalid entry, Reenter:\n";
                        cin >> base;
                    }
                    cout << "Enter the height of the triangle:\n";
                    cin >> height;
                    if (height < 0) {
                        cout << "Invalid entry, Reenter:\n";
                        cin >> height;
                    }
                    cout << "The area of the triangle is " << setprecision(1) << fixed << base * height * 0.5;
                case 4:
                    break;
                default:
                    break;
                }
            }
            default:cout << "Exiting Menu" << endl;
        }
    }while(choose<=nProbs);

    //Exit stage right!
    return 0;
}