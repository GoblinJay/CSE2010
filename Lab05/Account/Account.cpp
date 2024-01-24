/*
Jason Huang
File Name: Account.cpp
Date: 10/10/23
File Description: member functions file for Account
*/

#include "Account.h"
#include <iostream>
using namespace std;

//Unique account number
int Account::base = 1000000;

//Constructor
Account::Account(double b){
    accNumber = base++;
    balance = b;
}

//Deconstructor
Account::~Account(){

}

//Deposit
void Account::deposit(double amount){
    balance += amount;
}

//Withdraw
bool Account::withdraw(double amount){
    if (amount > balance){
        cout << "Withdrawal failed not enough funds. $5 penalty applied\n";
        balance -= 5; //$5 penalty
        return false;
    }
    else {
        cout << "$" << amount << " has been withdrawn from this account.\n";
        balance -= amount;
        return true;
    }
}

//Print
void Account::print() const{
    cout << "Account Number: " << accNumber << endl;
    cout << "Balance: $" << balance << endl;
}