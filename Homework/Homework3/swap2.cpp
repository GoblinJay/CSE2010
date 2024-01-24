/*
Jason Huang
Date: 12/4/23
File Name: swap2.cpp
File Description: swaps two parameters by pointer
*/

#include <iostream>

using namespace std;

void swap2(int* pX, int* pY){
    //checks if X is bigger than Y
    if (*pX > *pY){
        int temp = *pX;
        *pX = *pY;
        *pY = temp;
    }
}

int main(){
    //initializes and prompts user for two variables x and y
    int x = 0, y = 0;
    cout << "Please input an x value: ";
    cin >> x;
    cout << "Please input an y value: ";
    cin >> y;
    //original value
    cout << "The original x and y values are: " << x << "," << y << endl;
    //swap function
    swap2(&x, &y);
    cout << "After attempting swap, the x and y values are: " << x << "," << y << endl;

    return 0;
}