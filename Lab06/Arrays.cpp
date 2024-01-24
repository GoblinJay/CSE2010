/*
Jason Huang
File Name: Arrays.cpp
Date: 10/23/23
File Description: Program that has several functions that take arrays as parameters
*/

#include <iostream>
using namespace std;

//Fills the array with user inputs
int fillArray(double a[], const int MAX){
    cout << "Enter numbers to fill the array. Max values = " << MAX << endl;
    double input = 0; //Input variable set to double
    int count = 0; //Counts the amount of inputs
    while(!cin.fail() && count < MAX){ //Adds to array when input isnt Q or Max isnt reached
        cout << "Enter #" << count + 1 << " value, enter 'Q' to quit: ";
        cin >> input;
        if(cin.fail()){
            break;
        }
        else{
            a[count] = input;
            count++;
        }
    }
    return count;
}

//Prints array elements
void printArray(const double a[], int size){
    for(int i = 0; i < size; i++){ //For loop, i represents the index numbers
        cout << a[i] << " ";
    }
    cout << endl;
}

double sum(const double a[], int size){
    double sum = 0;
    for(int i = 0; i < size; i++){
        sum += a[i];
    }
    return sum;
}

//Finds the biggest value in the array
double max(const double a[], int size){
    double big = a[0]; //Starts at the beginning of the array
    for(int i = 1; i < size; i++){
        if(a[i] > big){ //Compares index value to current biggest value
            big = a[i];
        }
    }
    return big;
}

int main(){
    const int CAP = 100;
    double array[CAP];
    int size = fillArray(array, CAP);
    cout << "You filled the array with " << size << " values. \n";
    cout << "Array values: ";
    printArray(array,size);
    cout << "Sum of elements: " <<     sum(array,size) << endl;
    cout << "Max value in array: " << max(array,size) << endl;
}