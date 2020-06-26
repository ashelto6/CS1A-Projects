// function definitons

#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cin; using std::cout; using std::endl;

void assign(int wins[], int size) {

	for (int index = 0; index < size; ++index)
		wins[index] = 0;

}

bool check(int wins[], int size, int& pick) {

	for (int index = 0; index < size; ++index) {
		if (pick == wins[index])
			return true;
	}

	return false;

}

void draw(int wins[], int size) {

	srand(time(nullptr));
	int selectedNums = 0;

	while (selectedNums < size) {
		int randomNum = rand() % 100 + 1;
		bool checkNum = check(wins, size, randomNum);

		if (checkNum == false) {
			wins[selectedNums] = randomNum;
			++selectedNums;
		}
	}
}

int entry() {

	int pick;
	cout << "Pick a lottery number [1-100]: ";
	cin >> pick;

	return pick;

}

void printOut(int wins[], int size) {

	cout << endl;

	for (int index = 0; index < size; ++index)
		cout << wins[index]
		<< " ";

}