/*
Jason Huang
File Name: main.cpp
Date: 11/15/23
File Description: main cpp file for Lab 8
*/

#include "Person.h"
#include "Student.h"
#include "Employee.h"
#include "Faculty.h"
#include <iostream>
using namespace std;

int main(){
    //Initializes classes
    Person person("Peter Parker", "06/16/1966", "2389451");
    Student student("Gojo Satoru", "11/11/2011", "1111111", "Physics", 4.50);
    Employee employee("Subtronics", "12/23/1992", "1234123", 1000000.00, "10/01/2015");
    Faculty faculty("Jason Huang", "01/01/1111", "0917200", 6666.66, "09/09/1999", "Janitor");

    //adds student courses
    student.add_course("Calculus II");
    student.add_course("Anthropology");
    student.add_course("Computer Science I");

    //adds faculty courses
    faculty.add_course("Music Theory");
    faculty.add_course("Physical Education");
    faculty.add_course("Applied Linear Algebra");
    faculty.add_course("Physics");

    //displays person info
    cout << "Person\nName: " << person.get_name() << endl <<
    "DOB: " << person.get_DOB() << endl <<
    "ID: " << person.get_ID() << endl << endl;

    //displays student info
    student.print();

    //displays employee info
    cout << "Employee\nName: " << employee.get_name() << endl <<
    "DOB: " << employee.get_DOB() << endl <<
    "ID: " << employee.get_ID() << endl <<
    "Salary:" << employee.get_salary() << endl <<
    "Date Hired: " << employee.get_hired_date() << endl << endl;

    //displays faculty info
    faculty.print();

    //updates student info and prints
    student.set_name("Alison Wonderland");
    student.set_GPA(4.0);
    student.set_major("Music");
    student.print();

    //updates faculty info and prints
    faculty.set_rank("Principal");
    faculty.set_salary(100000.00);
    faculty.print();
}