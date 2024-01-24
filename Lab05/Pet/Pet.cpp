/*
Name: Jason Huang
File Name: Pet.cpp
Date: 10/4/23
Program Description: Member function definitions of Pet class
*/

#include <iostream>
#include <string>
#include "Pet.h"

using namespace std;

// constructor
Pet::Pet(string s, string n, char se, double w, string d){
    // sets variables
    species = s;
    name = n;
    sex = se;
    weight = w;
    DOB = d;
}

// destructor
Pet::~Pet(){

}

void Pet::setWeight (double w){
    // sets weight
    weight = w;
}

void Pet::print() const{
    // prints pet information
    cout << "Pet information" << endl;
    cout << "Species: " << species << endl;
    cout << "Name: " << name << endl;
    cout << "Sex: " << sex << endl;
    cout << "Weight: " << weight << endl;
    cout << "Date of Birth:" << DOB << endl;
}

bool Pet::isCat() const{
    // checks if pet is a cat
    if (species == "cat"){
        return true;
    }
    else{
        return false;
    }
}