#pragma once
// Function prototypes

#ifndef POWERBALL_HPP
#define POWERBALL_HPP

void assign(int[], int); // assigns all elements of the array to 0
bool check(int[], int, int&); // checks if the selected numbers or input numbers match any element values in the array
void draw(int[], int); // assigns all array elements each to different random number within 1-100
int entry(); // asks the user to enter their lottery pick
void printOut(int[], int); // prints the 20 randomly selected numbers assigned to the elements of the array in draw()

#endif