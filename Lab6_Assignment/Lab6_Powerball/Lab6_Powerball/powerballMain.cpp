// This program will perform the
// task of the Powerball Lottery Game
// 2/17/2020
// Antonio S.-M.

#include <iostream>
#include "powerball.hpp"

using std::cout; using std::endl;

int main() {

	cout << "Let's play the Powerball!\n\n";

	const int arraySize = 20;
	int wins[arraySize];
	int matchCount = 0;

	assign(wins, arraySize);
	draw(wins, arraySize);

	for (int entries = 0; entries < 5; ++entries) {
		int userpick = entry();
		bool matches = check(wins, arraySize, userpick);
		
		if (matches == true)
			++matchCount;
	}

	if (matchCount > 0)
		cout << "\nCongratulations! You WIN!\n"
		<< "Total amount of winning numbers: "
		<< matchCount << endl;
	else
		cout << "\nNone of your numbers matched the winning numbers! You LOSE!\n"
		<< "Total amount of winning numbers: "
		<< matchCount << endl;

	printOut(wins, arraySize);

}