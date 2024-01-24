/*
Jason Huang
File Name: Homework2a
Date: 10/11/23
File Description: Question 9 for Homework 2. Implements the factorial function */

#include <iostream>
#include <cmath>

using namespace std;

//function to determine factorial of number
int factorial(int n){
	int f = 1;
    for (int i = 1; i <= n; ++i){
        f *= i;
    }
    return f;
}

int main(){
	//Initializes variables
	int input = 0;

	//Prompts the user for values
    while (true){
        cout << "Enter a number between 1 and 20: ";
        cin >> input;
        //If the input is within the range it'll print the factorial
        if (input > 0 && input < 21){
            cout <<  input << "!= " << factorial(input) << endl;
            break;
        }
        //Else it'll restart
        else {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input.\n";
        }
    }
	return 0;
}
