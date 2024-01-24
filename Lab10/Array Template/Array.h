/*
Jason Huang
Date: 11/29/23
File Name: ArrayTemplate.h
File Description: .h file for ArrayTemplate
*/

#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>

template <typename T>
class Array{
    private:
        T* ptr; // ptr is a dynamic array for any type t
        int capacity; //max cap of array
        int total; //total num of elements in array
    public:
        Array(); //empty array, set max cap = 200
        ~Array(); //deconstructor
        void add(const T& n); //adds an element to end of array
        void print() const; //prints all
};

#endif