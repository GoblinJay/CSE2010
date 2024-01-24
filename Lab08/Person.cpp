/*
Jason Huang
File Name: Person.cpp
Date: 11/15/23
File Description: .cpp file for Person class
*/

#include "Person.h"

//constructor
Person::Person(string n, string dob, string id){
    name = n;
    DoB = dob;
    ID = id;
}

//deconstructor
Person::~Person(){

}

//Get name function
string Person::get_name(){
    return name;
}

//Get DoB function
string Person::get_DOB(){
    return DoB;
}

//Get ID function
string Person::get_ID(){
    return ID;
}

//set name function
void Person::set_name(string newName){
    name = newName;
}

//virtual whatami function
string Person::whatami(){
    return "Person";
}