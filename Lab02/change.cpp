/* Jason Huang
 * Change App
 * Calculates the total of pennies nickels dimes and quarters
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//variables
 double p = 0, n = 0, d = 0, q = 0;
 	//prompts user to initialize variables
 cout << "Number of pennies: ";
 cin >> p;
 cout << "Number of nickels: ";
 cin >> n;
 cout << "Number of dimes: ";
 cin >> d;
 cout << "Number of quarters: ";
 cin >> q;
 	//Adds the change together and outputs
 double total = (p*.01) + (n*.05) + (d*.1) + (q*.25);
 cout << "You have $" << total << " in change" << endl;
}
