/* Jason Huang
 * File Name: Exercise2
 * Date: 09/18/2023
 * File Description: A program that uses the Cartesian coordinate system to print what quadrant a point is in
 */

#include <iostream>
using namespace std;

int main()
{
	//declare variables for the x and y
	int x = 0, y = 0;
	//Prompt the user for the x and y values
	cout << "Enter the values for x: ";
	cin >> x;
	cout << "Enter the values for y: ";
	cin >> y;
	//check what quadrant the point is in
	cout << "Your point is: (" << x << "," << y << ")." << endl;
	cout << "Which is in the ";
	if (x > 0 && y > 0){
		cout << "1st quadrant" << endl;
	}
	else if (x < 0 && y > 0){
		cout << "2nd quadrant" << endl;
	}
	else if (x < 0 && y < 0){
		cout << "3rd quadrant" << endl;
	}
	else if (x > 0 && y < 0){
		cout << "4th quadrant" << endl;
	}
	else{
		cout << "origin" << endl;
	}
	return 0;
}
