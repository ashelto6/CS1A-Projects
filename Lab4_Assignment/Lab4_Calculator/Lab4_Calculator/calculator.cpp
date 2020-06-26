// This program will perform the task of a calculator
// using functions to complete the task
// 2/5/2020
// Antonio S.-M.

#include <cstdlib>
#include <cmath>
#include <iostream>

using std::cout; using std::cin; using std::endl;

int main() {

	int operatorChoice;
	int absOp;
	double operand, expo;

	cout << "Operators:\n"
		<< "1 = absolute value\n"
		<< "2 = square root\n"
		<< "3 = floor\n"
		<< "4 = power\n";

	do {
		cout << "\nChoose an operator: ";
		cin >> operatorChoice;

		if (operatorChoice == 1) {
			cout << "Enter a number to find it's absolute value: ";
			cin >> absOp;
			cout << "The result is: " << abs(absOp) << endl;
		}
		else  if (operatorChoice == 2) {
			cout << "Enter a number to find it's square root: ";
			cin >> operand;
			cout << "The result is: " << sqrt(operand) << endl;
		}
		else if (operatorChoice == 3) {
			cout << "Enter a number to find it's floor: ";
			cin >> operand;
			cout << "The result is: " << floor(operand) << endl;
		}
		else if (operatorChoice == 4) {
			cout << "Enter a base: ";
			cin >> operand;
			cout << "Enter an exponent: ";
			cin >> expo;
			cout << "The result is: " << pow(operand, expo) << endl;
		}

	} while (operatorChoice >= 1 && operatorChoice <= 4);
}