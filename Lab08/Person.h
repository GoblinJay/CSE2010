/*
Jason Huang
File Name: Person.h
Date: 11/13/23
File Description: header file for person class
*/

#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

//Person class
class Person{
    //private data members
    private:
        string name;
        string DoB;
        string ID;
    //public member functions
    public:
        //constructor
        Person(string n, string dob, string id);
        //deconstructor
        ~Person();
        string get_name(); 
        string get_DOB();
        string get_ID();
        virtual string whatami(); // Homework 3 virtual function
        void set_name(string newName);
};

#endif