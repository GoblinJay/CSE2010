/*
  Name: Jason Huang
  File Name: Hello.cpp
  Program: This program will display a hello message
  Date: 08/31/23
*/

#include <iostream>
using namespace std;

int main()
{
 //declare variables
 string name = "Jason Huang";
 int year = 0;

 //output a message
 cout << "Hello, my name is " << name << endl << "This is CSE 2010!" << endl;
 cout << "What year is it?";
 cin >> year;
 cout << "It is the year " << year << " 20 years ago it was the year " << year - 20;

 return 0;
}
