// This program will perform the task
// of an age guessing game using functions
// 2/5/2020
// Antonio S.-M.

#include <ctime>
#include <iostream>
#include <cstdlib>

using std::cout; using std::cin;

int main() {

	srand(time(nullptr));

	const int randAge = rand() % 100 + 1;
	int guess;

	do {
		cout << "How old am I? ";
		cin >> guess;

		if (guess > randAge)
			cout << "Wrong, I am younger. ";
		else if (guess < randAge)
			cout << "Wrong, I am older. ";
		else
			cout << "Correct!";

	} while (guess != randAge);
}