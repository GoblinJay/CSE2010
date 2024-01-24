/*
Jason Huang
File Name: Student.h
Date: 11/15/23
File Description: header file for student class derived from person class
*/

#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

//derived Student class
class Student : public Person{
    //private data members
    private:
        string major;
        double GPA;
        string* schedule;
        int num_courses;
    //public member functions
    public:
        Student(string n, string dob, string id, string m, double g); //constructor
        ~Student(); //deconstructor
        string get_major(); 
        double get_GPA();
        void set_major(string newMajor);
        void set_GPA(double newGPA);
        void add_course(string course);
        void print();
        virtual string whatami(); //Homework 3 virtual function
};

#endif