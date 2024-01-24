/* Jason Huang
 * File Name: Exercise1
 * Date: 09/27/23
 * File Description: Prime number printer using a function
 */

#include <iostream>
#include <cmath>

using namespace std;

//function to see if the boolion is prime
bool isPrime(int n){
	//Checks if number is less than 2
	if (n < 2){
		return false;
	}
	//Checks for factors
	for (int factor = 2; factor <= sqrt(n); factor++){
		if (n % factor == 0){
			return false;
		}
	}
	return true;
}

int main(){
	//Initializes variables
	int start = 0, end = 0;

	//Prompts the user for values
	cout << "Give me a starting number: ";
	cin >> start;
	cout << "Give me a ending number: ";
	cin >> end;
	cout << "The prime numbers between " << start << " and " << end << " are: ";

	//Calls the function
	for (;start <= end; start++){
		if(isPrime(start)){
			cout << start << " ";
			}
	}
	cout << endl;
	return 0;
}
