/*
Jason Huang
File Name: Pointers.cpp
Date: 11/5/23
File Description: Prompts user for array size and uses pointers to execute functions.
*/

#include <iostream>

using namespace std;

//function to fill an array
void fillArray(int* a, int size) {
    for(int i = 0; i < size; i++){
        cout << "Enter value for element #" << i + 1 << ": ";
        cin >> a[i];
    } 
}

//function to print elements in an array
void print(const int* a, int size) {
    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}


//function that returns sum of all values in array
int sum(const int* a, int size) {
    int total = 0;
    for(int i = 0; i < size; i++) {
        total += a[i];
    }
    return total;
}

int main() {
    int size;

    //Prompts the user for array size
    cout << "Enter the array size: ";
    cin >> size;

    //Creates array using size
    int* array = new int[size];

    fillArray(array, size);
    cout << "Array values: ";
    print(array, size);

    //Prints sum 
    int total = sum(array, size);
    cout << "Sum of array values: " << total << endl;

    //Print memory info
    cout << "Value stored in the pointer: " << array << endl;
    cout << "Memory address of the pointer: " << &array << endl;
    cout << "Memory addresses of each array elment: " << endl;
    for(int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": " << &array[i] << endl;
    }

    //Deallocates memory
    delete[] array;
    return 0;
}