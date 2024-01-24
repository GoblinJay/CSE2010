/* Jason Huang
 * File Name: Homework1
 * Date: 10/2/23
 * File Description: Code that will implement the quadratic formula program that will calculate two solutions. Revised for homework
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
        // initialises the variables a,b,c for the quadratic formula
 	double a = 0, b = 0, c = 0;
 	cout << "Give me three numbers ";
 	cin >> a >> b >> c;

	//Calcs the discriminant
	double D = pow(b, 2) - 4 * a * c;

	if (D < 0){
		//If D < 0 then there are only two complex roots
		cout << "There are two complex roots\n";
	}
	else if (D == 0){
		//Only one real root
		double x1 = -b / (2 * a);
		cout << "TAhe two roots are the same\n";
	}
	else{
		//D is greater than 0
		double x1 = (-b + sqrt(D)) / (2 * a);
		double x2 = (-b - sqrt(D)) / (2 * a);
		cout << "There are two distinct real roots\n";
		cout << "x1 = " << x1 << " and x2 = " << x2 << endl;
	}

 	return 0;
}

