/* 
 * File:   main.cpp
 * Author: Jacob Zander
 * Created on February 3, 2020, 8:19 PM
 * Purpose: BlackJack
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;

bool isLoginValidated(string);
int main(int argc, char** argv) {
    // Declare Variables
    
    // Login Variables
    string lgin;
    int userMode;
    
    // User Variables
    string user;
    
    // Welcome Screen
    cout << "Welcome to Blackjack (21)" << endl;
    
    // Login Screen
    // Login Validator
    do {
        cout << "Please Login (if new user type n)" << endl;
        cin >> lgin;
    } while (!isLoginValidated(lgin));
    
    if(lgin=="n") {
        // Create new user
        string user;
        bool input;
        do {
            cin >> user;
        } while (!isLoginValidated(user));
        // Input name into file TODO
    } else {
        // Check if the name is on the 
    }
    
    return 0;
}
// It's just figuring out if the user wants to create a new player
// and validating the inputs for looking up players 
bool isLoginValidated(string login) {
    if (login == "n") {
        return true;
    } else {
        for (char c : login) {
            if (isspace(c)) return false;
            if(!isalpha(c) && !isspace(c)) return false;
            return true;
        }
    }
    
}

