/*
Jason Huang
File name: Point.cpp
Date: 10/09/23
File Description: File that holds all our member functions
*/

#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;

//Constructor
Point::Point(int x, int y){
    x_ = x;
    y_ = y;
}

//Deconstructor
Point::~Point(){

}

//Print function
void Point::print() const{
    cout << "Coordinates\n";
    cout << "X:" << x_ << endl;
    cout << "Y:" << y_ << endl;
}

//Move function
void Point::move(int newX, int newY){
    x_ += newX;
    y_ += newY;
    cout << "A point has been moved\n";
}

//Quadrant function
void Point::quadrant() const{
    if (x_ > 0 && y_ > 0){
        cout << "This point is in Quadrant 1\n";
    }
    else if (x_ < 0 && y_ > 0){
        cout << "This point is in Quadrant 2\n";
    }
    else if (x_ < 0 && y_ < 0){
        cout << "This point is in Quadrant 3\n";
    }
    else if (x_ > 0 && y_ < 0){
        cout << "This point is in Quadrant 4\n";
    }
    else {
        cout << "This point is the origin\n";
    }

}

//Distance function
double Point::distance(const Point& p) const{
    double disx = x_ - p.x_;
    double disy = y_ - p.y_;
    double dist = sqrt(pow(disx,2)+ pow(disy,2));
    cout << "Distance between points is " << dist << endl;
    return dist;
}