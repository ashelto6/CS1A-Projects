// This program will print figures using
// iterative constructs to complete the task
// 1/30/20
// Antonio S.-M.

#include <iostream>

using std::cout; using std::cin; using std::endl;

int main() {

	cout << "Enter the figure's size: ";
	int figSize;
	cin >> figSize;
	cout << "\nInput number: " << figSize;
	cout << "\n\n";

	if (figSize > 0)
		for (int row = 0; row < figSize; ++row) {
			for (int column = 0; column < figSize; ++column)
				cout << "*";

			cout << "\n";
		}
	else
		cout << "Your chosen number is not supported.";

	for (int row = 0; row < figSize; ++row) {
		cout << "\n";
		for (int spaces = 0; spaces < row; ++spaces)
			cout << " ";
		for (int column = 0; column < 1; ++column)
			cout << "*";
	}

	cout << "\n";

	for (int row = 0; row < figSize; ++row) {
		cout << "\n";
		for (int spaces = figSize - 1; spaces > row; --spaces)
			cout << " ";
		for (int column = 0; column < 1; ++column)
			cout << "*";
	}

	cout << "\n\n";

	for (int row = 1; row <= figSize; ++row) {
		for (int column = 1; column <= figSize; ++column) {
			if (row == 1)
				cout << "*";
			else if (column == 1)
				cout << "*";
			else if (row == figSize)
				cout << "*";
			else if (column == figSize)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}

	cout << "\n";

	int magicNum = figSize + 1;			// this variable is needed to print the forward slash inside the box

	for (int row = 1; row <= figSize; ++row) {
		for (int column = 1; column <= figSize; ++column) {
			if ((row == 1) || (row == figSize))
				cout << "*";
			else if (magicNum == (row + column))	// when the sum of the row number and the column number 
				cout << "*";						// is equal to the magicNum, output "*"
			else if ((column == 1) || (column == figSize))
				cout << "*";
			else if (column == row)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}

}