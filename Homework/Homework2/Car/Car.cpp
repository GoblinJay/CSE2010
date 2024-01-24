/*
Jason Huang
File Name: Car.cpp
Date: 10/23/23
File Description: cpp file for Car class
*/

#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

//constructor
Car::Car(string ma, string mo, int y, double mpg){
    //sets varialbes
    make = ma;
    model = mo;
    year = y;
    MPG = mpg;
}

//decostructor
Car::~Car(){

}

//Prints out info
void Car::print() const{
    cout << "Car information \n" <<
    "Model: " << model << endl <<
    "Make: " << make << endl <<
    "Year: " << year << endl <<
    "MPG: " << MPG << endl << endl;
}

//Checks MPG
bool Car::better_MPG(Car& b) const{
    return MPG > b.MPG;
}