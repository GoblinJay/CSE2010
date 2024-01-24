/*
Jason Huang
File Name: Faculty.cpp
Date: 11/13/23
File Description: .cpp file for faculity class derived from employee class
*/

#include "Faculty.h"

//Constructor
Faculty::Faculty(string n, string dob, string id, double s, string h, string r) :Employee(n, dob, id, s, h){
    rank = r;
    num_courses = 0;
    schedule = new string[10];
}

//Deconstructor
Faculty::~Faculty(){
    delete [] schedule;
}

//Gets rank
string Faculty::get_rank(){
    return rank;
}

//Sets the rank
void Faculty::set_rank(string newRank){
    rank = newRank;
}

//Adds a teaching course
void Faculty::add_course(string course){
    if (num_courses < 10){
        schedule[num_courses] = course;
        num_courses++;
    }
    else {
        cout << "\nSchedule's full. Can't add a course at the current time.\n";
    }
}


void Faculty::print(){
    cout << "Faculty\nName: " << get_name() << endl <<
    "DOB: " << get_DOB() << endl <<
    "ID: " << get_ID() << endl <<
    "Salary:" << get_salary() << endl <<
    "Date Hired: " << get_hired_date() << endl <<
    "Rank: " << get_rank() << endl << 
    "Teaching Schedule:\n";
    for (int i = 0; i < num_courses; i++){
        cout << schedule[i] << endl;
    }
    cout << endl;
}

//virtual whatami function
string Faculty::whatami(){
    return "Faculty";
}