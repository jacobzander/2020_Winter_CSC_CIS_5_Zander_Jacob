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
bool isUserInDB(string);
bool addUserDB(string);
string cinLogin();
string cinLogin(string);
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
        string newUser;
        newUser = cinLogin("Enter your name:");
        // Check if the name is on the list
            // If name is then cancel

        
            // If name is not then continue and login the player
        
        // Input name into file TODO
        
        
        
        user = newUser;
    }
//    } else {
//        // Check if the name is on the list
//        
//        
//        if () { // Name is on list
//            
//        } else { // Name is not on list
//            do {
//                
//            }
//        } 
//        
//    }
    
    
    
    return 0;
}



string cinLogin() {
    string input;
    do {
            cin >> input;
    } while (!isLoginValidated(input));
    return input;
}

string cinLogin(string msg) {
    string input;
    do {
            cout << msg << endl;
            cin >> input;
    } while (!isLoginValidated(input));
    return input;
}

// Implementing the cin in this function
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

// Database

// Checks to see if user is in DB
bool isUserInDB(string user) {
    ifstream inf("db.dat");
    
    if (!inf) {
        cout << "Could not access the database. Exiting." << endl;
        return false;
    }
    
    while (inf) {
        string strInput;
        inf >> strInput;
        if (strInput == user) return true;
    }
    return false;
    
}

// Adds user to DB
bool addUserDB(string user) {
    
}


