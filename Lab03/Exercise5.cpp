/* Jason Huang
 * File Name: Exercise5
 * Date: 09/20?2023
 * File Description: Program that reads a set of test scores from the user between 0 - 100 and prints out information about the tests
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//Initialze variables
	int numTests = 0;
	double testScore = 0;
	double avgScore = 0;
	double deviation = 0;
	double sum1 = 0;
	double sum2 = 0;
	bool more = true;

	//Prompts the user for test data
	cout << " Enter your test scores, enter \"Q\" to quit. \n";
	//Does some of the math for sum1 sum2 (also adds number of tests with every entry)
	while(more){
		cin >> testScore;
		//Sees if the user pressed Q
		if(cin.fail()){
			cin.clear();
                        cin.ignore(1000, '\n');
			more = false;
		}
		//Sees if the test score is in the range of 0-100
		else if(testScore <= 0 && testScore >= 100){
			cout << "Invalid entry";
		}
		//Runs the math if everything else checks out
		else{
		numTests++;
		sum1 += testScore;
		sum2 += (testScore * testScore);
		}
	}
	//Does the rest of the math
	if (numTests == 0){
		cout << "Program ended" << endl;
	}
	else{;
	avgScore = sum1/numTests;
	deviation = sqrt((sum2/numTests)-(avgScore * avgScore));
	cout << "The number of tests you entered was: " << numTests << endl << "The average score of your tests was: " << avgScore << endl <<  "The standard deviation of your scores were: " << deviation << endl;
	}
	return 0;

}
