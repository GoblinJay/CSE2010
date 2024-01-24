/*
Jason Huang
Date: 12/9/23
File Name: Exercise8.cpp
File Description: Program that uses fstream to read and store integers into a vector and then prints the sum
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// Reads integers from a file and stores them into a vector
void read (istream & in, vector<int> & v) {
    int num;
    while (in >> num) { // Reads until end of file
        v.push_back(num);
    }
}

// Returns the sum of all elements in a vector
int sum (const vector<int> & v) {
    int sum = 0;
    for (int elem : v) { // Range-based for loop
        sum += elem; // Add each element to sum
    }
    return sum;
}

int main() {
    vector<int> v; // Vector to store integers
    ifstream in("ex5.txt"); // Open file
    if (!in) { // Check if file opened successfully
        cout << "Error opening file\n";
        return 1;
    }
    read(in, v); // Read integers from file
    cout << "Sum: " << sum(v) << endl;
    return 0;
}