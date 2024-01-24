/*
Jason Huang
Date: 12/9/23
File Name: Stack.h
Description: header file for stack class template
*/

#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <cassert>
using namespace std;

//T will be the datatype stored in the stack
template <typename T>
class Stack{
    //data members
    private:
        T* ptr; //dynamic array of type T
        int capacity; //capacity of the stack
        int total; //total number of elements in the stack
    //member functions
    public:
        Stack(int n); //constructor
        ~Stack(); //destructor
        void push(const T& n); //pushes value onto the stack
        bool empty() const; //returns true if stack is empty
        int size() const; //returns total number of elements in the stack
        T top(); //returns the top element of the stack
        void pop(); //removes the top element of the stack
};

#endif