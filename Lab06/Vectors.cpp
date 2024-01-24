/*
Jason Huang
File Name: Vectors.cpp
Date: 10/25/23
File Description: Program that takes several functions with vector parameters
*/

#include <iostream>
#include <vector>
using namespace std;

void fillVector(vector<int> & v){
    cout << "Enter numbers to fill the vector.\n";
    int input = 0, count = 1;
    while (!cin.fail()){
        cout << "Enter # " << count << " value. Enter 'Q' to quit: ";
        cin >> input;
        if (cin.fail()){
            break;
        }
        else{
            v.push_back(input);
            count++;
        }
    }
}

void printVector(const vector<int> & v){
    cout << "Elements in vector are: ";
    for(int i: v){
        cout << i << " ";
    }
    cout << "\n";
}

int linearSearch(const vector<int> & v, int value){
    for(int i = 0; i < v.size(); i++){
        if(v[i] == value){
            cout << "Linear Search\nThe value " << value << " is at index# " << i << " in the vector.\nIt took " << i + 1 << " checks.\n";
            return i;
        }
    }
    cout << "Linear Search\nThe value is not in the vector.\nIt took " << v.size() << " checks.\n";
    return -1;
}

int binarySearch(const vector<int> & v, int value){
    int checks = 0, left = 0, right = v.size() - 1;
    while(left <= right){
        checks++;
        int mid = left + (right-left)/2;

        if (v[mid] == value){
            cout << "Binary Search\nThe value " << value << " is at index #" << mid << " in the vector.\nIt took " << checks << " checks.\n";
            return mid; 
        }
        if (v[mid] < value){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    cout << "Binary Search\nThe value is not in the vector.\nIt took " << checks << " checks.\n";
    return -1;
}

int main(){
    vector<int> numbas;
    fillVector(numbas);
    printVector(numbas);
    
    int Search[] = {2 ,34, 230, 213};

    for (int value : Search){
        linearSearch(numbas, value);
        binarySearch(numbas, value);
    }

    return 0;
}