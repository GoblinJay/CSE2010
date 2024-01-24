/* 
 * Jason Huang
 * File Name: Exercise2
 * Date: 10/2/23
 * File Description: Implementing geometric formulas within functions.
 */

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

//Formula for cone volume
double cone_volume (double r, double h){
	return M_PI * pow(r,2) * (h/3);
}

//Formula for cone surface
double cone_surface (double r, double h){
	double root = sqrt(pow(h,2) + pow(r,2));
	return M_PI * r * (r + root);
}

//Formula for cube volume
double cube_volume (double a){
	return pow(a, 3);
}

//Formula for cube surface
double cube_surface (double a){
	return 6 * pow(a,2);
}

//Formula for sphere volume
double sphere_volume (double r){
	return 4/3 * M_PI * pow(r,3);
}

//Formula for sphere surface
double sphere_surface (double r){
	return 4 * M_PI * pow(r,2);
}

//Formula for cylinder volume
double cylinder_volume (double r, double h){
	return M_PI * pow(r,2) * h;
}

//Formula for cylinder surface
double cylinder_surface (double r, double h){
	double temp = 2 * M_PI * pow(r,2);
	return (2 * M_PI * r * h) + temp;
}

int main(){
	//Initializes variable and prompts the user
	string shape = " ";
	double r = 0, h = 0, a = 0;
	cout << "Enter a shape ( cone, cube, sphere, or cylinder): ";
	cin >> shape;

	//Calls cone function
	if (shape == "cone"){
		cout << "Enter the radius and the height: ";
		cin >> r >> h;
		cout << "Volume: " << cone_volume(r,h) << endl;
		cout << "Surface: " << cone_surface(r,h) << endl;
	}
	
	//Calls cube functions
	else if (shape == "cube"){
		cout << "Enter the edge length: ";
		cin >> a;
		cout << "Volume: " << cube_volume(a) << endl;
		cout <<"Surface: " << cube_surface(a) << endl;
	}

	//Calls sphere function
	else if (shape == "sphere"){
		cout << "Enter the radius: ";
		cin >> r;
		cout << "Volume: " << sphere_volume(r) << endl;
		cout << "Surface: " << sphere_surface(r) << endl;
	}

	//Calls cylinder function
	else if (shape == "cylinder"){
		cout << "Enter the radius and the height: ";
		cin >> r >> h;
		cout << "Volume: " << cylinder_volume(r,h) << endl;
		cout << "Surface: " << cylinder_surface(r,h) << endl;
	}

	//Invalid entry
	else{
		cout << "Invalid entry" << endl;
	}

	return 0;
}

