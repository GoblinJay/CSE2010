/*
Jason Huang
File Name: Employee.cpp
Date: 11/15/23
File Description: .cpp file for employee class derived from person class
*/

#include "Employee.h"

//constructor
Employee::Employee(string n, string dob, string id, double s, string h) :Person(n, dob, id){
    salary = s;
    hire_date = h;
}

//deconstructor
Employee::~Employee(){

}

//Gets salary
double Employee::get_salary(){
    return salary;
}

//Gets the date hired
string Employee::get_hired_date(){
    return hire_date;
}

//sets the salary
void Employee::set_salary(double newSalary){
    salary = newSalary;
}

//virtual whatami function
string Employee::whatami(){
    return "Employee";
}