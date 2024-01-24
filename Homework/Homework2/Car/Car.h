/*
Jason Huang
File Name: Car.h
Date: 10/23/23
File Description: header file for Car class
*/

#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

class Car{
    private:
        string make; //Make of car
        string model; //Model of car
        int year; //Year of car
        double MPG; //MPG of car
    public:
        Car (string ma, string mo, int y, double MPG); //constructor
        ~Car(); //deconstructor
        void print () const; //Print info
        bool better_MPG(Car& b) const; //Compares two car MPG
};

#endif