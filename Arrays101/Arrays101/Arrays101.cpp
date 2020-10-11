// Arrays101.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// class roster problem
	string classRoster[6];

	// fill in the array
	for (int i = 0; i < 6; i++)
	{
		cout << "Please enter the " << i + 1 << " name from your roster" << endl;
		string name;
		cin >> name;
		classRoster[i] = name;
	}

	// check the array for a value
	bool check = false;
	for (int j = 0; j < 6; j++)
	{
		if (classRoster[j] == "Adrian" || classRoster[j] == "adrian")
			check = true;
	}

	if (check == true)
		cout << "Adrian is in the class :)" << endl;
	else
		cout << "Adrian is not in the class :(" << endl;


	// hot dog example
	cout << " " << endl;
	int hotDogsADay[7] = { 102, 57, 78, 98, 47, 212, 0 };
	for (int i = 0; i < 7; i++) {
		cout << "Enter the hot dogs you ate on " << i+1 << " day of the week." << endl;
		cin >> hotDogsADay[i];
	}

	double hotDogTotal = 0;
	for (int i = 0; i < 7; i++) {
		hotDogTotal += hotDogsADay[i];
	}
	cout << "You ate " << hotDogTotal << " hot dogs this week." << endl;
	double hotDogAverage = hotDogTotal / 7;
	cout << "You ate " << hotDogAverage << " hot dogs each day." << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
