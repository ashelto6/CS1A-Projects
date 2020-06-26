// This program will make calculations 
// using programmer-defined functions
// 2/10/2020
// Antonio S.-M.

#include <iostream>

using std::cout; using std::cin;

double bmrWomen(double weight, int height, int age); // computes and returns a woman user's BMR using her weight, height and age
double bmrMen(double weight, int height, int age); // computes and returns a man user's BMR using his weight, height and age
int main() {

	double userWeight;
	int feet;
	int inches;
	int userAge;
	int gender;

	cout << "1 = Male\n"
		<< "2 = Female\n";

	cout << "Choose your gender: ";
	cin >> gender;
	if (gender != 1 && gender != 2) {
		cout << "Invalid Choice.";
		return 0;
	}

	cout << "\nEnter your weight [in pounds]: ";
	cin >> userWeight;

	cout << "\nEnter your height [in feet 'space' inches]: ";
	cin >> feet >> inches;

	cout << "\nEnter your age [in years]: ";
	cin >> userAge;

	double bmr;
	int numOfDonuts;
	int userHeight = (feet * 12) + inches;
	const int calsPerDonut = 195;

	if (gender == 1) {
		bmr = bmrMen(userWeight, userHeight, userAge);

		numOfDonuts = bmr / calsPerDonut;

		cout << "\nYour BMR is " << bmr
			<< " meaning you can consume " << numOfDonuts
			<< " doughnuts per day.";
	}
	else {
		bmr = bmrWomen(userWeight, userHeight, userAge);

		numOfDonuts = bmr / calsPerDonut;

		cout << "\nYour BMR is " << bmr
			<< " meaning you can consume " << numOfDonuts
			<< " doughtnuts per day.";
	}
}

double bmrWomen(double weight, int height, int age) {

	double bmr;

	bmr = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);

	return bmr;
}
double bmrMen(double weight, int height, int age) {

	double bmr;

	bmr = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);

	return bmr;
}