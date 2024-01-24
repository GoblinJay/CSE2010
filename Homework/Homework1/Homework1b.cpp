/*
 * Jason Huang
 * File Name: Homework2
 * Date: 10/3/23
 * File Description: Program that reads test scores between 0-100. Asks the user for how many test scores and doesnt let them enter more. Prints avg, lowest, and highest test scores
 */

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	//Initializes variables
	int numTests = 0;
	double testScore = 0, avgScore = 0, lowScore = 100, highScore = 0, sum = 0;

	//Prompts for test score amount
	cout << "Hello, how many test scores will you be entering: ";
	cin >> numTests;

	//Checks for valid input
	while (cin.fail() || numTests <= 0){
		cout << "Invalid input. Please try again: ";
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> numTests;
	}
	
	//Prompts for test score
	for (int i = 0; i < numTests; i++){
		cout << "Enter test #" << i + 1 << ": ";
		cin >> testScore;
		
		//Checks if the score is between 0-100
		while (cin.fail() || testScore < 0 || testScore > 100){
			cout << "Invalid. Enter a score between 0 and 100: ";
			cin.clear();
			cin.ignore(1000, '\n');
			cin >> testScore;
		}
		
		sum += testScore;
		//Calculates lowest test score
		if (testScore < lowScore){
			lowScore = testScore;
		}

		//Calculates highest test score
		if (testScore > highScore){
			highScore = testScore;
		}
	}

	//Calculates avg score
	avgScore = sum / numTests;

	//Outputs scores
	cout << "The average score of the tests is: " << avgScore << endl;
	cout << "The lowest score is: " << lowScore << endl;
	cout << "The highest score is: " << highScore << endl;

	return 0;
}
