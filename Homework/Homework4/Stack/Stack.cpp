/*
Jason Huang
Date: 12/9/23
File Name: Stack.cpp
File Description: .cpp file for stack class template member functions
*/

#include "Stack.h"

//constructor
template <typename T>
Stack<T>::Stack(int n) {
    capacity = n;
    total = 0;
    ptr = new T[n]; //allocate memory for the stack
}

//destructor
template <typename T>
Stack<T>::~Stack() {
    delete [] ptr; //deallocate memory
}

//pushes value onto the stack
template <typename T>
void Stack<T>::push(const T& n) {
    //make sure we can add another element
    if (total < capacity) {
        ptr[total] = n; //add value to the top of the stack
        total++; //increment total
    }
    else {
        cout << "Stack is full\n";
    }
}

//returns true if stack is empty
template <typename T>
bool Stack<T>::empty() const {
    //check if total is 0
    if (total == 0) {
        return true;
    }
    else {
        return false;
    }
}

//returns total number of elements in the stack
template <typename T>
int Stack<T>::size() const {
    return total;
}

//returns the top element of the stack
template <typename T>
T Stack<T>::top() {
    //make sure stack is not empty
    if(empty()){
        cout << "Stack is empty\n";
        assert(false); //terminate program
    }
    else {
        return ptr[total - 1]; //return top element
    }
}

//delete the top element of the stack
template <typename T>
void Stack<T>::pop() {
    //make sure stack is not empty
    if(total > 0){
        total--; //decrement total
    }
    else {
        cout << "Stack is empty\n";
    }
}

template class Stack<int>;
template class Stack<string>;