/*
Jason Huang
Date: 11/29/23
File Name: Larger.cpp
File Description: Uses template functions to determine the larger of a set amount of elements.
*/

#include <iostream>
using namespace std;

//Template to find larger between two elements
template <typename T>
T larger(T first,T second){ // T replaces anything we might use (Ex. int char string)
    //returns larger
    if(first > second){
        return first;
    }
    else{
        return second;
    }
}

//Template to find larger between three elements
template <typename T>
T larger(T first, T second, T third){
        return larger(larger(first, second), third);
}

//Template to find largest between four elements
template <typename T>
T larger(T first, T second, T third, T fourth){
    return larger(larger(first, second, third), fourth);
}

int main(){
    //Char template
    cout << "Largest 'a' and 'A': " << larger('a', 'A') << endl;
    //Int template
    cout << "Largest of 23,145,230: " << larger(23,145,230) << endl;
    //Double template
    cout << "Largest of 3.99,4.25,1.24,7.68: " << larger(3.99,4.25,1.24,7.68) << endl;

    return 0;
}
