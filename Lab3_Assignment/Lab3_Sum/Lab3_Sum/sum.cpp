// This program will get the sum of negative integers
// using an iterative statement to achieve the task
// 1/30/20
// Antonio S.-M.

#include <iostream>

using std::cout; using std::cin; using std::endl;

int main() {

	cout << "Enter a number [0 to quit]: ";
	int userNum;
	cin >> userNum;

	int sumOfNeg = 0;

	while (userNum != 0) {
		
		if (userNum < 0)
			sumOfNeg += userNum;
		cout << "Enter a number [0 to quit]: ";
		cin >> userNum;

	}
	
	cout << "The sum of all negative numbers is " << sumOfNeg << endl;
}