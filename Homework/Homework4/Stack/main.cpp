/*
Jason Huang
Date: 12/9/23
File Name: main.cpp
File Description: Program that uses Stack class template
Main program that does the following:
Declares a stack of integers (whatever size you want)
Call empty to show the stack is empty
Push 3 elements onto the stack
Print the top element
Pop the 3 elements off the stack
Call empty to show the stack is empty
*/

#include "Stack.h"
using namespace std;

int main(){
    Stack<int> s(5); //declare stack of integers
    if(s.empty()){ //check if stack is empty
        cout << "Stack is empty\n";
    }
    cout << "Pushing elements onto the stack...\n";
    s.push(1); //push 3 elements onto the stack
    s.push(2);
    s.push(3);
    cout << "Top element: " << s.top() << endl; //print top element

    cout << "Popping elements off the stack...\n";
    s.pop(); //pop 3 elements off the stack
    s.pop();
    s.pop();
    if(s.empty()){ //check if stack is empty
        cout << "Stack is empty\n";
    }
    
    return 0;
}