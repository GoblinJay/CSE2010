/*
Jason Huang
File Name: Employee.h
Date: 11/15/23
File Description: header file for employee class derived from perosn class
*/

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"

//Employee class
class Employee : public Person{
    //private data members
    private:
        double salary;
        string hire_date;
    //public member functions
    public:
        Employee(string n, string dob, string id, double s, string h); //constructor
        ~Employee(); //deconstructor
        double get_salary();
        string get_hired_date();
        void set_salary(double newSalary);
        virtual string whatami(); //Homework 3 virtual function
};

#endif