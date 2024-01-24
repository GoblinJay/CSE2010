/*
Jason Huang
Date: 12/4/23
File Name: main2.cpp
File Description: Homework 3 using Lab 8 to call virtual fucntions and using vectors
*/

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
#include <vector>
using namespace std;

int main(){
    //declare a vector of Person pointers
    vector <Person*> v;
    //adds class objects to vector
    v.push_back(new Person("Peter Parker", "06/16/1966", "2389451"));
    v.push_back(new Student("Gojo Satoru", "11/11/2011", "1111111", "Physics", 4.50));
    v.push_back(new Employee("Subtronics", "12/23/1992", "1234123", 1000000.00, "10/01/2015"));
    v.push_back(new Faculty("Jason Huang", "01/01/1111", "0917200", 6666.66, "09/09/1999", "Janitor"));
    //displays what each object is
    for (int i = 0; i < v.size();i++){
        //using vector elements to display object name and what class it is
        cout << v[i] -> get_name() << " is a " << v[i] -> whatami() << endl;
    }
    //deallocates heap memory
    for (int i = 0; i < v.size(); i++){
        delete v[i];
    }

    return 0;
}