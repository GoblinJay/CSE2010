/*
Jason Huang
File Name: Faculty.h
Date: 11/13/23
File Description: header file for faculity class derived from employee class
*/

#ifndef FACULTY_H
#define FACULTY_H
#include "Employee.h"

//Faculty class
class Faculty : public Employee{
    //private data members
    private:
        string rank;
        string* schedule;
        int num_courses;
    //public member functions
    public:
        Faculty(string n, string dob, string id, double s, string h, string r); //Constructor
        ~Faculty(); //Deconstructor
        string get_rank();
        void set_rank(string newRank);
        void add_course(string course);
        void print();
        virtual string whatami(); //Homework 3 virtual function
};

#endif