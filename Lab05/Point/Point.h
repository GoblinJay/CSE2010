/*
Jason Huang
File Name: Point.h
Date: 10/09/23
File Description: .h file for Point.cpp
*/

#ifndef POINT_H
#define POINT_H

class Point{
    private:
        int x_; //coordinate x
        int y_; //coordinate y
    
    public:
        Point (int x, int y); //constructor
        ~Point(); //deconstructor
        void print() const; //prints the coordinates of the point
        void move(int newX, int newY); // updates the x and y values of the point
        void quadrant() const; //prints which quadrant the point is in
        double distance(const Point& p) const; //returns the distance between two points
};

#endif