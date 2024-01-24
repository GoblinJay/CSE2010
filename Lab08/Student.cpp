/*
Jason Huang
File Name: Student.cpp
Date: 11/15/23
File Description: .cpp file for student class derived from person class
*/

#include "Student.h"

//Constructor
Student::Student(string n, string dob, string id, string m, double g) :Person(n, dob, id){
    major = m;
    GPA = g;
    num_courses = 0;
    schedule = new string[5];
}

//Deconstructor
Student::~Student(){
    delete[] schedule;
}

//get major function
string Student::get_major(){
    return major;
}

//get GPA function
double Student::get_GPA(){
    return GPA;
}

//Sets new major
void Student::set_major(string newMajor){
    major = newMajor;
}

//Sets new GPA
void Student::set_GPA(double newGPA){
    GPA = newGPA;
}

//Adds a course to schedule
void Student::add_course(string course){
    if (num_courses < 5){
        schedule[num_courses] = course;
        num_courses++;
    }
    else {
        cout << "\nSchedule's full. Can't add a course at the current time.\n";
    }
}

//Prints student info
void Student::print(){
    cout << "Student\nName: " << get_name() << endl <<
    "DOB: " << get_DOB() << endl <<
    "ID: " << get_ID() << endl <<
    "Major: " << get_major() << endl <<
    "GPA: " << get_GPA() << endl <<
    "Courses:\n";

    for (int i = 0; i < num_courses; i++){
        cout << schedule[i] << endl;
    }
    cout << endl;
}

//virtual whatami function
string Student::whatami(){
    return "Student";
}