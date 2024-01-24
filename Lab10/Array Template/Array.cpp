/*
Jason Huang
Date: 11/29/23
File Name: ArrayTemplate.cpp
File Description: .cpp file for ArrayTemplate
*/

#include "Array.h"
using namespace std;

template <typename T>
//constructor
Array<T>::Array(): capacity(200), total(0){
    //new Array that'll hold 200
    ptr = new T[200]; //heap memory
}

template <typename T> //must do this for every function
//deconstructor
Array<T>::~Array(){
    delete[] ptr; //deallocates memory
}

template <typename T> //gotta do this every time
void Array<T>::add(const T& n){
    //checks if cap is reached
    if (total < capacity){
        ptr[total] = n;
        total++; //increase total
    }
    else{
        //if cap is reached
        cout << "Array is full!\n"; 
    }
}

template <typename T> //still gotta do this
void Array<T>::print() const{
    cout << "Array Elements: \n";
    for (int i = 0; i < total; i++){
        cout << ptr[i] << " ";
    }
    cout << endl;
}

template class Array<int>;
template class Array<double>;
template class Array<char>;