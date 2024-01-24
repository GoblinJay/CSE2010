/* Jason Huang
 * Quadratic Formula
 * Code that will implement the quadratic formula program that will calculate two solutions.
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// initialises the variables a,b,c for the quadratic formula
 double a = 0, b = 0, c = 0;
 cout << "Give me three numbers ";
 cin >> a >> b >> c;
	// solution a using the quadratic formula
 double x1 = (-b + sqrt(pow(b,2)-4*a*c))/(2*a);
	// solution b using the quadratic formula
 double x2 = (-b - sqrt(pow(b,2)-4*a*c))/(2*a);

 cout <<"The two solutions are x1 = " << x1 << ", and x2 = " << x2 << endl;

 return 0;
}
