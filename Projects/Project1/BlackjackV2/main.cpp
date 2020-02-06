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
        if(isUserInDB(newUser)) {
            cout << "The user is in the db" << endl; // debug
            return 0;
        } else {
            addUserDB(newUser);
            cout << "Added user to db" << endl; // debug
            user = newUser;
            cout << "Logged in Under: " << user << endl;
        }
    } else {
        // Check if the name is on the list
        if (isUserInDB(lgin)) { // Name is on list
            user = lgin;
            cout << "Logged in Under: " << user << endl;
        } else { // Name is not on list
            cout << "Login invalid name not in db" << endl;
            return 0;
        } 
    }
    
    
    
    
    return 0;
}


/*
 Login Functions
 */

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

/*
 Database Functions
 */

// Checks to see if user is in DB
bool isUserInDB(string user) {
    ifstream inf;
    inf.open("db.dat");
    
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
    ofstream ouf;
    ouf.open("db.dat", ios_base::app);
    ouf << user << endl;
}

// Find the user and update there score in the database // Second Project
bool updateScore(string user) {
    
}

/*
Game Functions
 */
