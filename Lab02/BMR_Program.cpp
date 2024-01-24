/* Jason Huang
 * BMR Program
 * Program that will run the calculations to fid the BMR of a person based on their gender
 */

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
 string fname = " ", lname = " ";
 int age = 0, weight = 0 ;
 double height = 0, bfp = 0;

 cout << "Welcome to the BMR program!" << endl << "This program will provide you with basal metabolic rate (BMR) information." << endl << endl << "Please enter the following information:" << endl << "	First Name: ";
 cin >> fname;
 cout << "	Last Name: ";
 cin >> lname;
 cout << "	Age (years): ";
 cin >> age;
 cout << "	Weight (lbs): ";
 cin >> weight;
 cout << "	Body Fat Percentage (%): ";
 cin >> bfp;
 cout << "	Height (inches): ";
 cin >> height;
 double LBM = (weight - ((bfp / 100)* weight));
 double BMRF = (655 + (4.35 * LBM) + (4.7 * height) - (4.7 * age));
 double BMRM = (66 + (6.23 * LBM) + (12.7 * height) - (6.8 * age));

 cout << "Thank you! Please see a summary below." << endl << endl << "Summary:" << endl << "	Initials: " << fname.at(0) << "." << lname.at(0) << endl << "	Age: " << age << " years old." << endl << "	Lean Body Mass: " << LBM << " lbs." << endl << "	Height: " << height << "in." << endl << endl << "	The minimum calories a day your body needs to perform basic functions:" << endl << "		BMR (female): " << BMRF << " kcal/day"<< endl << "		BMR (male): " << BMRM << " kcal/day" << endl << "Thanks for using the BMR Program. Have a great day!" << endl;
}
