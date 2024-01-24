/*
 * Jason Huang
 * File Name: Exercise4
 * Date: 10/2/23
 * File Description: Interactive ATM program that repeatedly asks the user to view their balance, make a deposit, make a withdrawal, or quit
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//global variables usued in any functions
double check_bal = 1500.00; 
double sav_bal = 1000.00;


//forward declarations
void print_bal (string account);
void deposit (string account);
void withdraw (string account);

int main(){
        string input;
        string account;
        cout << fixed << setprecision(2);
        cout << "Welcome to the CSE Bank!" << endl;

        //The initual menu
        while (true){
            cout << "Please selecgt from the following menu\n";
            cout << "Enter 'B' to check your balance\n";
            cout << "Enter 'W' to make a withdrawal.\n";
            cout << "Enter 'D' to make a deposit.\n";
            cout << "Enter 'Q' to quit.\n";
            cout << "Enter action: ";
            cin >> input;
            cout << endl;

        //Balance
            if (input == "B" || input == "b"){
                cout << "Which account would you like to see the balance of?" << endl;
                cout << "Enter 'C' for Checking, 'S' for Savings, or 'B' to see both." << endl;
                cout << "Enter account: ";
                cin >> account;
                print_bal(account);
                cout << endl;
            }

        //Withdrawal
            else if (input == "W" || input == "w"){
                cout << "Which account would you like to withdraw from?" << endl;
                cout << "Enter 'C' for Checking or 'S' for Savings" << endl;
                cout << "Enter account: ";
                cin >> account;
                withdraw(account);
                cout << endl;
            }

        //Deposit
            else if (input == "D"|| input == "d"){
                cout << "Which account would you like to deposit into?" << endl;
                cout << "Enter 'C' for Checking or 'S' for Savings" << endl;
                cout << "Enter account: ";
                cin >> account;
                deposit(account);
                cout << endl;
            }

            else if (input == "Q" || input == "q"){
                cout << "Your final balances are:" << endl;
                print_bal("B");
                cout << endl << "Thank you for using the CSE Bank! Have a great day!" << endl;
                break;
            }
            else {
                cout << "Invalid input. Please try again." << endl;
            }
        }

        return 0;
}

//Balance function
void print_bal(string account) {
        if (account == "B" || account == "b"){
                cout << setprecision(2) << "Savings Account Balance: $" << sav_bal << endl;
                cout << setprecision(2) << "Checking Account Balance: $" << check_bal << endl;
        }
        else if (account == "S" || account == "s"){
                cout << setprecision(2) << "Saving Account Balance: $" << sav_bal << endl;
        }
        else if (account == "C" || account == "c"){
                cout << setprecision(2) << "Checking Account Balance: $" << check_bal << endl;
        }
        else {
                cout << "Cannot print balance: Account not recognized" << endl;
        }
}


//Withdrawal function
void withdraw(string account){
        double amount;
        cout << "Enter withdrawal amount: ";
        cin >> amount;

        if (account == "S" || account == "s"){
                if (amount <= sav_bal){
                        sav_bal -= amount;
                        cout << "Withdrawal complete." << endl;
                }
                else {
                        cout << "Insufficient funds. Withdrawal failed." << endl;
                }
        }
        else if (account == "C" || account == "c"){
                if (amount <= check_bal){
                        check_bal -= amount;
                        cout << "Withdrawal complete." << endl;
                }
                else {
                        cout << "Insufficient funds. Withdrawal failed." << endl;
                }
        }
        else {
                cout << "Account not recognized. Withdrawal failed." << endl;
        }
        print_bal(account);
}

//Deposit function
void deposit(string account){
        double amount;
        cout << "Enter the amount you wish to deposit: $";
        cin >> amount;

        if (account == "S" || account == "s"){
                sav_bal += amount;
        }
        else if (account == "C" || account == "c"){
                check_bal += amount;
        }
        else {
                cout << "Account not recognized. Deposit failed." << endl;
        }

        cout << "Deposit complete." << endl;
        print_bal(account);
}
