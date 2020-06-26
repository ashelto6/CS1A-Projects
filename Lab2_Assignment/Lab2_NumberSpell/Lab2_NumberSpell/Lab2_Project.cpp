// Greetings! This program will be used 
// to spell out the name of numbers 1-50
// Antonio Shelton-McGaha
// 1/21/2020

#include <iostream>

using std::cout; using std::cin; using std::endl;

int main() {

	cout << "Enter a number 1-50:\n";
	int number;
	cin >> number;
	
	if (number > 50 || number < 1) {
		cout << "Number is not supported.";

		return 0;
	}

	const int firstNum = number / 10;
	const int secondNum = number % 10;

	if (firstNum == 1) {                
		switch (secondNum) {

		case 0:
			cout << "Ten";
			break;

		case 1:
			cout << "Eleven";
			break;

		case 2:
			cout << "Twelve";
			break;

		case 3:
			cout << "Thirteen";
			break;

		case 4:
			cout << "Fourteen";
			break;

		case 5:
			cout << "Fifteen";
			break;

		case 6:
			cout << "Sixteen";
			break;

		case 7:
			cout << "Seventeen";
			break;

		case 8:
			cout << "Eighteen";
			break;

		case 9:
			cout << "Nineteen";
			break;
		}

	}
	else {
		switch (firstNum) {

		case 2:
			cout << "Twenty ";
			break;

		case 3:
			cout << "Thirty ";
			break;

		case 4:
			cout << "Forty ";
			break;

		case 5:
			cout << "Fifty ";
			break;
		}

		switch (secondNum) {

		case 1:
			cout << "One";
			break;

		case 2:
			cout << "Two";
			break;

		case 3:
			cout << "Three";
			break;

		case 4:
			cout << "Four";
			break;

		case 5:
			cout << "Five";
			break;

		case 6:
			cout << "Six";
			break;

		case 7:
			cout << "Seven";
			break;

		case 8:
			cout << "Eight";
			break;

		case 9:
			cout << "Nine";
			break;

		}
	}
}