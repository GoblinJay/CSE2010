/*
Jason Huang
Date: 12/9/23
File Name: vector.cpp
File Description: A program that puts elements into a vector and sorts
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print_vector(const vector<int> &v) {
    for (int elem : v) {
        cout << elem << " ";
    }
    cout << endl;
}

void insert_vector(vector<int> &v, int value) {
    // Use lower_bound to find the proper insert position
    auto it = lower_bound(v.begin(), v.end(), value);
    v.insert(it, value);
}

int main() {
    vector<int> v = {5, 14, 23, 64, 89, 101};  // The initial sorted vector

    // Print the initial vector
    cout << "Initial vector values: ";
    print_vector(v);

    // Values to be inserted
    vector<int> valuesToInsert = {1, 20, 64, 120};

    for (int value : valuesToInsert) {
        cout << "Inserting " << value << " into the vector...\n";
        insert_vector(v, value);
        cout << "Current vector values: ";
        print_vector(v);
    }

    return 0;
}