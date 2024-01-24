/*
Jason Huang
File Name: Account_main.cpp
Date: 10/10/23
File Description: Main file for account. Creates ATM Menu for user
*/

#include <iostream>
#include "Account.h"
#include <string>
#include <iomanip>
using namespace std;

int main(){
    //Initializes variables
    char input;
    string acc;
    double total;

    //Makes two accounts
    Account Savings(10000000);
    Account Checkings(1000);

    cout << fixed << setprecision(2);
    cout << "Welcome to the ATM\n";

    //ATM Menu
    while (true){
        cout << "Menu\n";
        cout << "(B)alance\n";
        cout << "(D)eposit\n";
        cout << "(W)ithdraw\n";
        cout << "(Q)uit\n";
        cout << "Enter your input: ";
        cin >> input;

        //Balance
        if(input == 'B' || input == 'b'){
            cout << "Please choose an account\n";
            cout << "(C)hecking\n";
            cout << "(S)aving\n";
            cout << "Enter your input: ";
            cin >> input;
            //Checkings
            if (input == 'C' || input == 'c'){
                Checkings.print();
            }
            //Savings
            else if (input == 'S' || input == 's'){
                Savings.print();
            }
            //Invalid
            else {
                cout << "Invalid input\n";
            }
        }
        //Deposit
        else if (input == 'D' || input == 'd'){
            cout << "Please choose an account\n";
            cout << "(C)hecking\n";
            cout << "(S)aving\n";
            cout << "Enter your input: ";
            cin >> input;
            //Checkings
            if (input == 'C' || input == 'c'){
                cout << "Enter deposit amount: ";
                cin >> total;
                //Checks to see if amount is positive
                if (total > 0){
                    Checkings.deposit(total);
                    cout << "$" << total << " has been depositied\n";
                }
                //Invalid
                else {
                    cout << "Invalid input\n";
                }
            }
            //Savings
            else if (input == 'S' || input == 's'){
                cout << "Enter deposit amount: ";
                cin >> total;
                //Checks to see if the amount is positive
                if (total > 0){
                    Savings.deposit(total);
                    cout << "$" << total << " has been depositied\n";
                }
                //Invalid
                else {
                    cout << "Invalid input\n";
                }
            }
            //Invalid input
            else {
                cout << "Invalid input\n";
            }
        }
        //Withdraw
        else if (input == 'W' || input == 'w'){
            cout << "Please choose an account\n";
            cout << "(C)hecking\n";
            cout << "(S)aving\n";
            cout << "Enter your input: ";
            cin >> input;
            //Checkings
            if (input == 'C' || input == 'c'){
                cout << "Enter witdrawal amount: ";
                cin >> total;
                Checkings.withdraw(total);
            }
            //Savings
            else if (input == 'S' || input == 's'){
                cout << "Enter witdrawal amount: ";
                cin >> total;
                Savings.withdraw(total);
            }
            //Invalid
            else {
                cout << "Invalid input\n";
            }
        }
        //Quit
        else if (input == 'Q' || input == 'q'){
            cout << "Thank you for using this ATM\n";
            break;
        }
        //Invalid
        else {
            cout << "Invalid input\n";
            cin.clear();
            cin.ignore(1000,'\n');
        }
    }
}