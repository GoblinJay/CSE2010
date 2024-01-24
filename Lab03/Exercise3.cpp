/* Jason Huang
 * File Name: Exercise3
 * Date: 09/18/2023
 * File Description: A program that will play Guess the Number with the user
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	//Initialize variables

	srand(time(NULL));
	int input = 0;
	int tooHigh = 0;
	int tooLow = 0;
	int totalGuesses = 0;

	//Call rand() to get a number between 1-20

	int ranNum = rand() % 20 + 1;

	//Prompt the user to guess a number

	while(input != ranNum){
	cout << "Guess a number between 1 and 20: ";
	cin >> inputi;
		//If the entry isnt a number
		if (cin.fail()){
			cout << "Invalid entry" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		}
		//If the entry is too low
		else if (input < ranNum){
			cout << "Too low" << endl;
			tooLow++;
			totalGuesses++;
		}
		//If the entry is too high
		else if (input > ranNum){
			cout << "Too high" << endl;
			tooHigh++;
			totalGuesses++;
		}
		//If they got it right
		else{
			totalGuesses++;
			cout << "You got it!" << endl << "You guessed too low " << tooLow << " times." << endl << "You guessed too high " << tooHigh << " times." << endl << "You had a total of " << totalGuesses << " guesses." << endl;
		} 
	}
}
