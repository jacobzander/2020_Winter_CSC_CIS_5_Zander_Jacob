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
#include <vector>
using namespace std;

bool isLoginValidated(string);
bool isUserInDB(string);
bool addUserDB(string);
bool isHandBlackJack(vector<unsigned short>&);
bool isBlackJack(int, int, int);
bool isBlackJack(int, int, int, int);
bool cardsInFileToVector(vector<string>&, string);
void addCardToHand(vector<unsigned short>);
void addCardToHand(vector<unsigned short>, int);
bool isBust(int, int);
bool isBust(int, int, int);
string cinLogin();
string cinLogin(string);

int main(int argc, char** argv) {
    // Set Random number seed
    srand(static_cast<unsigned int> (time(0)));

    // Declare Variables

    // Login Variables
    string lgin;
    // Setup cards
    string cardsFileName = "cards.dat";
    vector<string> cards(52);
    
    
    cardsInFileToVector(cards, cardsFileName);
    
    // Want to use a vector for the cards...
    unsigned short bet, pC1, pC2, pC3, pC4, hC1, hC2, hC3, hC4;
    vector<unsigned short> playerCards, houseCards;

    // User Variables
    string user;

    // Bet Variables
    bool betValid;

    // Game Variables
    bool isGameOn;

    // Welcome Screen
    cout << "Welcome to Blackjack (21)" << endl;

    // Login Screen
    // Login Validator
    do {
        cout << "Please Login (if new user type n)" << endl;
        cin >> lgin;
    } while (!isLoginValidated(lgin));

    if (lgin == "n") {
        // Create new user
        string newUser;
        newUser = cinLogin("Enter your name:");
        // Check if the name is on the list
        // If name is then cancel
        if (isUserInDB(newUser)) {
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

    // Welcome to the game
    // Implementing money in V2 using enums and chips
    // For right now we will use straight ints but I
    // want to create a chip system where you either bet one, 
    // five, twentyfive, fifty or one hundred.

    // Cards
    // I wanna use enums to create suit types and value


    cout << "Welcome " << user << " to blackjack!" << endl;

    // Hand Do Loop
    do {
        betValid = false;
        do {
            cout << "How much you want to bet?" << endl;
            cin >> bet;
            if (cin.fail())
                betValid = false;
            else if (bet <= 0)
                betValid = false;
            else
                betValid = true;
        } while (!betValid);
        
        
        pC1 = rand() % 10 + 1;
        pC2 = rand() % 10 + 1;

        cout << "First two cards " << pC1 << " and " << pC2 << endl;

        if (isHandBlackJack(pC1, pC2)) 

        // Adds Cards to hand
        // Function override for more than one card
        
        hC1 = rand() % 10 + 1;
        hC2 = rand() % 10 + 1;
        addCardToHand(houseCards, 2);
        cout << "Dealer (House) first two cards " << hC1 << " and " << hC2 << endl;

        // Player card loop
        bool isPlayerDone = false;
        while (!isPlayerDone) {
            char choice;
            cout << "Do you wanna hit(h) or stand(s)?" << endl;
            cin >> choice;
            if (choice == 'h') {
                // Add card to vector here in project 2 TODO
                // This will allow for more than one card to hit
                playerCards.push_back(rand() % 10 + 1);
                isPlayerDone = true;
            } else if (choice == 's') {
                isPlayerDone = true;
            }
        }

        // Calculate the winner
        if (isHandBlackJack(pC1, pC2)) {
            cout << "You won you got blackjack!" << endl;
        } else if (isHandBlackJack(hC1, hC2)) {
            cout << "The house got blackjack!" << endl;
        } else {
            // Determine who is closer to 21 TODO
            cout << "Nobody won better luck next time ... adding soon." << endl;
        }

        cout << "To play again press 1 to exit press any other button to continue" << endl;
        int tmp;
        cin >> tmp;
        if (tmp == 1) {
            isGameOn = false;
        } else {
            isGameOn = true;
        }
    } while (isGameOn);

    cout << "Thanks for playing!" << endl;
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
            if (!isalpha(c) && !isspace(c)) return false;
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
    throw "updateScore is not implemented yet."; // TODO
}

/*
Game Functions
 */

// Checks to see if two or more cards are a blackjack
// There is currently three overloads for this function
// But in later versions I want there to be one function
// That takes in a vector that can determine if the hand
// is a blackjack

bool isHandBlackJack(vector<unsigned short> hand) {
    accumlate(hand.begin(), hand.end(), 0);
    
}

bool isBlackJack(int c1, int c2, int c3) {
    int total = 0, total2 = 0;
    total = c1 + c2 + c3;
    if (c1 == 1) total2 = 11 + c2 + c3;
    if (c2 == 1) total2 = c1 + 11 + c3;
    if (c3 == 1) total2 = c1 + c2 + 11;
    // If the total2 is not available then just check org total
    if (total2 == 0) {
        if (total == 21) {
            return true;
        }
    } else {
        if (total2 == 21 || total == 21) {
            return true;
        }
    }
    return false;
}

void addCardToHand(vector<unsigned short> hand) {
    // TODO
}

void addCardToHand(vector<unsigned short> hand, int numOfCards) {
    
}

bool cardsInFileToVector(vector<string>& cards, string fileName) {
    fstream input;
    input.open(fileName.c_str(), ios::in);
    
    if (!input) {
        cerr << "Cannot open file: " << fileName << endl;
        return false;
    }
    
    string str;
    while(getline(input, str)) {
        if(str.size() > 0) {
            cards.push_back(str);
        }
    }
    input.close();
    return true;
    
}

/*
Money Functions
 */

// I want chips to be an object or maybe array idk...

int chipsFromMoney(int money) {
    throw "chipsFromMoney is not implemented yet."; // TODO
}
