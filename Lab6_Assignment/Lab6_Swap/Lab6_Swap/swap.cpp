// Function definitions

#include <iostream>

using std::cin; using std::cout;

void getNumbers(int& x, int& y, int& z) {

	cout << "Enter Three Integers: ";
	cin >> x
		>> y
		>> z;

}

void swap(int& x, int& y) {

	int tmp;

	tmp = x;
	x = y;
	y = tmp;

}  

void showResults(int x, int y, int z) {

	cout << "Here are your numbers swapped: "
		<< x << " "
		<< y << " "
		<< z << " ";

}