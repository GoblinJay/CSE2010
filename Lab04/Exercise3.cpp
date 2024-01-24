/*
 * Jason Huang
 * File Name: Exercise2
 * Date: 10/2/23
 * File Description: Overloading functions
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//First int function
int small (int num1, int num2){
	if (num1 < num2){
		return num1;
	}
	else{
		return num2;
	}
}

//Second int function
int small (int num1, int num2, int num3){
	return small(small(num1, num2), num3);
}

//Third int function
int small (int num1, int num2, int num3, int num4){
	return small(small(num1, num2), small(num3, num4));
}

int main(){

	srand(time(0));

	//Initializing random variables
	int num1 = rand() % 40 + 1;
	int num2 = rand() % 40 + 1;
	int num3 = rand() % 40 + 1;
	int num4 = rand() % 40 + 1;

	//Prints numbers and which ones smallest
	cout << "#1: " << num1 << endl << "#2: " << num2 << endl << "#3: " << num3 << endl << "#4: " << num4 << endl;
	
	//Stores smallest numbers
	int small1 = small(num1, num2);
	int small2 = small(num1, num2, num3);
	int small3 = small(num1, num2, num3, num4);

	//Prints smallest
	cout << "small(#1, #2): " << small1 << endl;
	cout << "small(#1, #2, #3): " << small2 << endl;
	cout << "small(#1 ,#2 ,#3 ,#4): " << small3 << endl;

	return 0;
}
