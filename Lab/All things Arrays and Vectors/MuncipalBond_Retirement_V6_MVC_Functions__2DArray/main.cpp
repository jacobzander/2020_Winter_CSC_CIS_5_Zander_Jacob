/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 3rd, 2020, 12:33 PM
 * Purpose:  Municipal Bond Savings for Retirement
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float CNVDCML=100.0f;//Conversion to Decimal from Percent
const int COLS=4;//number of Columns in the 2-D Array

//Function Prototypes
void savings(int[][COLS], int[][COLS], float[][COLS], float[][COLS], int, int, float);
void display(int[][COLS], int[][COLS], float[][COLS], float[][COLS], int, int, float, float, float, float);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    const int nYears = 30; //Number of years to save
    float intRate,//Interest Rate % from MUNI BOND
          salary, //Salary in $'s
          yrDpPc; //Yearly Percent Deposit
    int year[nYears][COLS],  //Year counter
        dYear[nYears][COLS]; //Year date
    float balance[nYears][COLS], interest[nYears][COLS];
    
    //Initialize Variables
    balance[0][2]=0.0f;  //Savings in $'s
    intRate=5;     //Yearly Interest Rate
    year[0][0]=0;        //Initialize counter to 0
    dYear[0][1]=2020;    //Initialize date year to now
    salary=100000.0f;//$100,000 per year
    yrDpPc=0.1f;     //Percentage of Salary to deposit
    intRate/=CNVDCML;
    
    //Process or map Inputs to Outputs
    //Create the Heading for the Savings Account
    float yrDep=yrDpPc*salary;
    float sav2Rtr=salary/intRate;
    
    savings(year, dYear, balance, interest, nYears, yrDep, intRate);
    display(year, dYear, balance, interest, nYears, yrDep, intRate, salary, sav2Rtr, yrDpPc);

    //Did you reach the goal
    if(balance[nYears][2]>sav2Rtr)cout<<"Yes you reached your retirement goal"<<endl;
    else cout<<"You failed to reach your retirement goal"<<endl;

    //Exit stage right!
    return 0;
}



void display(int year[][COLS], int dYear[][COLS], float balance[][COLS], float interest[][COLS], int nYears, int yrDep, float intRate, float salary, float sav2Rtr, float yrDpPc) {
        //Create the Heading for the Savings Account
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"With a Yearly Salary of $"<<salary
            <<" and an investment rate of "<<intRate*CNVDCML<<"%,"<<endl;
    cout<<"you will need a savings of $"<<sav2Rtr
            <<" at Retirement."<<endl;
    cout<<"Is "<<yrDpPc*CNVDCML<<"% = $"<<yrDep<<"/year enough for "
            <<nYears<<" years to reach the goal?"<<endl;
    cout<<"Year  Year       Balance      Interest       Deposit"<<endl;
    cout<<setw(4)<<year[0][0]<<setw(6)<<dYear[0][1]
            <<setw(14)<<balance[0][2]<<setw(14)
            <<interest[0][3]<<setw(14)<<yrDep<<endl;
    
    for (int cnt=1; cnt<=nYears;cnt++) {
        cout<<setw(4)<<year[cnt][0]<<setw(6)<<dYear[cnt][1]
        <<setw(14)<<balance[cnt][2]<<setw(14)
        <<interest[cnt][3]<<setw(14)<<yrDep<<endl;
    }
}

void savings(int year[][COLS], int dYear[][COLS], float balance[][COLS], float interest[][COLS], int nYears, int yrDep, float intRate) {
    interest[0][3]=balance[0][2]*intRate;
        // Calculate years
    for(int cnt=1;cnt<=nYears;cnt++){
        year[cnt][0] = year[cnt-1][0]+1;
        dYear[cnt][1] = dYear[cnt-1][1]+1;
        
        balance[cnt][2]=balance[cnt-1][2]*(1+intRate);
        balance[cnt][2]+=yrDep;      //End of Year
        interest[cnt][3]=balance[cnt][2]*intRate;//End of Year
    }
}