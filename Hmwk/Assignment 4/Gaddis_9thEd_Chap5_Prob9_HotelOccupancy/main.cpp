/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int floors, roomsOc, roomsUnOc;
    float perecent;
    //Initialize Variables
    cout<<"Enter how many floors there are:\n";
    cin>>floors;
    if(floors < 1) {
        cout<<"Not a valid amount of floors reeenter:\n";
        cin>>floors;
    }
    for (int i = 1; i <= floors; i++) {
        if(i != 13) {
            int roomsOnFloor, roomsOcOnFloor;
            cout<<"Enter how many rooms are on floor "<< i <<":\n";
            cin>>roomsOnFloor;
            if (roomsOnFloor < 10) {
                cout<<"Not a valid amount of rooms reenter:\n";
                cin>>roomsOnFloor;
            }
            cout<<"Enter how many are occupied:\n";
            cin>>roomsOcOnFloor;
            if(roomsOcOnFloor > roomsOnFloor) {
                cout<<"Not a valid amount of rooms occupied reenter:\n";
                cin>>roomsOcOnFloor;
            }
            roomsUnOc += (roomsOnFloor - roomsOcOnFloor);
            roomsOc += roomsOcOnFloor;
        }
    }
    perecent = roomsOc(roomsOc + roomsUnOc);
    
    cout<<"There are "<<roomsOc<<" rooms occupied.\n";
    cout<<"There are "<<roomsUnOc<<" rooms unoccupied.\n";
    cout<<perecent<<"% of rooms are occupied.";
    //Exit stage right!
    return 0;
}