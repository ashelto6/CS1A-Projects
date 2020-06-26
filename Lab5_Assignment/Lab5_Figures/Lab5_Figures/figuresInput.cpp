// This program will get some data from a user
// and print figures corresponding to the data inputed
// 2/12/2020
// Antonio S.-M.

#include <iostream>
#include "figures.hpp"

using std::cin; using std::cout;

int main() {

	cout << "1. Square\n"
		<< "2. Slash\n"
		<< "3. Backslash\n"
		<< "\nSelect figure: ";

	int figureNum;
	cin >> figureNum;
	if (figureNum < 1 || figureNum > 3)
		return 0;

	do {

		cout << "\nSelect size: ";
		int figureSize;
		cin >> figureSize;

		char squareType;
		if (figureNum == 1) {
			cout << "\nfilled, hollow or slashed [f/h/s]: ";
			cin >> squareType;
		}

		if (figureNum == 1 && squareType == 'f')
			filledSquare(figureSize);
		else if (figureNum == 1 && squareType == 'h')
			hollowSquare(figureSize);
		else if (figureNum == 1 && squareType == 's')
			slashedSquare(figureSize);
		else if (figureNum == 2)
			slash(figureSize);
		else
			backslash(figureSize);

		cout << "\n1. Square\n"
			<< "2. Slash\n"
			<< "3. Backslash\n"
			<< "\nSelect figure: ";
		cin >> figureNum;

	} while (figureNum >= 1 && figureNum <= 3);
}

