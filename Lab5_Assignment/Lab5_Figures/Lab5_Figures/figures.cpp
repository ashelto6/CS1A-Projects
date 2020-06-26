// funtion definitions
// 2/12/2020
// Antonio S.-M.

#include <iostream>

using std::cout; using std::endl;

void filledSquare(int figSize) {

	cout << endl;

	if (figSize > 0)
		for (int row = 0; row < figSize; ++row) {
			for (int column = 0; column < figSize; ++column)
				cout << "*";

			cout << "\n";
		}
}

void hollowSquare(int figSize) {

	cout << endl;

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
}

void slash(int figSize) {

	for (int row = 0; row < figSize; ++row) {
		cout << "\n";
		for (int spaces = figSize - 1; spaces > row; --spaces)
			cout << " ";
		for (int column = 0; column < 1; ++column)
			cout << "*";
	}
	cout << endl;
}

void slashedSquare(int figSize) {

	cout << endl;

	int magicNum = figSize + 1;

	for (int row = 1; row <= figSize; ++row) {
		for (int column = 1; column <= figSize; ++column) {
			if ((row == 1) || (row == figSize))
				cout << "*";
			else if (magicNum == (row + column))
				cout << "*";
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

void backslash(int figSize) {

	for (int row = 0; row < figSize; ++row) {
		cout << "\n";
		for (int spaces = 0; spaces < row; ++spaces)
			cout << " ";
		for (int column = 0; column < 1; ++column)
			cout << "*";
	}
	cout << endl;
}