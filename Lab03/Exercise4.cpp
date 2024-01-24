/* Jason Huang
 * File Name: Exercise4.cpp
 * Date: 09/20/2023
 * File Description: Program that prints out prime numbers from starting point to ending point
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	//Initializes variables
	int start = 0, end = 0;
	//Prompts the user
	cout << "Give me a starting number: ";
	cin >> start;
	cout << "Give me a ending number: ";
	cin >> end;
	cout << "The prime numbers between " << start << " and " << end << " are: ";
	//Does all the math and stuff	
	for (;start <= end; start++){
		bool is_prime = true;

		for (int factor = 2; factor < start; factor++){

			if (start % factor == 0){
				is_prime = false;
			}
		}
		if (is_prime){
			cout << start << " ";
		}
	}
	cout << endl;
	return 0;
}
