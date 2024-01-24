/*
Jason Huang
File Name: Account.h
Date: 10/10/23
File Description: header file for Account
*/

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account{
    private:
        long accNumber;
        double balance;
        static int base;
    public:
        Account(double b); // only constructor
        ~Account(); //deconstructor
        void deposit(double amount); // deposists amount to account
        bool withdraw(double amount); // withdraws amount from account
        void print() const; //prints account balance
};

#endif