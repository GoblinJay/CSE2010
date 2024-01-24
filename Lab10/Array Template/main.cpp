/*
Jason Huang
Date: 12/4/23
File Name: main.cpp
File Description: main file for Lab 10 using templates
*/

#include "Array.h"

using namespace std;

int main(){
    //creating arrays of different types
    Array<int> intArray;
    Array<double> doubleArray;
    Array<char> charArray;

    //Adding elements
    intArray.add(10);
    intArray.add(20);
    intArray.add(30);

    doubleArray.add(12.3);
    doubleArray.add(12.4);
    doubleArray.add(12.5);

    charArray.add('A');
    charArray.add('B');
    charArray.add('C');

    //Prints arrays
    intArray.print();
    doubleArray.print();
    charArray.print();

    return 0;
}