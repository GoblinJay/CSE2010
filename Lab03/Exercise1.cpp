/* Jason Huang
 * Date: 09/18/2023
 * File Name: Excersise 1
 * File Description: A program that simulates a calculator to add, subtract, multiply, and divide two numbers provided by the user
 */

#include <iostream>
using namespace std;

int main()
{
	//Initialize operator
	char op = ' ';
	//Initialize two operands
	double op1 = 0, op2 = 0;
	//Prompt the user for the operator they want to use
	cout << "Enter operator: +, -, *, /: ";
	cin >> op;
	//Checking what operator was used
	if(op == '+'){
		//addition
		cout << "Enter two operators: ";
		cin >> op1 >> op2;
		cout << op1 << "+" << op2 << "=" << op1+op2 << endl;
	}
	else if(op == '-'){
		//subtraction
		cout << "Enter two operators: ";
		cin >> op1 >> op2;
		cout << op1 << "-" << op2 << "=" << op1-op2 << endl;
	}
	else if(op == '*'){
		//multiplication
		cout << "Enter two operators: ";
		cin >> op1 >> op2;
		cout << op1 << "*" << op2 << "=" << op1*op2 << endl;
	}
	else if(op == '/'){
		//division
		cout << "Enter two operators: ";
		cin >> op1 >> op2;
		if(op2 == 0)
			cout << "Cannot divide by zero" << endl;
		else
			cout << op1 << "/" << op2 << "=" << op1/op2 << endl;
	}
	else{
		//Invalid operator
		cout << "Invalid operator" << endl;
	}
	return 0;
}
