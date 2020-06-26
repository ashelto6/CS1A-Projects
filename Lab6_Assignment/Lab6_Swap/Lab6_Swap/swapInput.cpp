// This program will swap numbers
// using functions and call-by-reference
// 2/17/2020
// Antonio S.-M.

#include <iostream>
#include "swap.hpp"


int main() {

	int firstNum, secondNum, thirdNum;

	getNumbers(firstNum, secondNum, thirdNum);

	if (firstNum > secondNum)
		swap(firstNum, secondNum);

	if (firstNum > thirdNum)
		swap(firstNum, thirdNum);

	if (secondNum > thirdNum)
		swap(secondNum, thirdNum);

	showResults(firstNum, secondNum, thirdNum);

}