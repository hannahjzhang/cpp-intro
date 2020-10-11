// SwitchStatements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	// example
	cout << "Please pick your favorite color out of the three." << endl;
	cout << "Choice 1: blue" << endl;
	cout << "Choice 2: purple" << endl;
	cout << "Choice 3: pink" << endl;

	int choice;
	cout << "Enter in your choice number!" << endl;
	cin >> choice;

	// switch statement
	switch (choice)
	{
	case 1:
		cout << "That's a good choice" << endl;
		break;
	case 2:
		cout << "That's a bad choice." << endl;
		break;
	case 3:
		cout << "That's a choice a kitty cat would make." << endl;
		break;
	default:
		cout << "Choosing not to decide, you still have made a choice." << endl;
		break;
	}
	// declare switch, state the cases and output, write "break", state the default case

	// if and else statement
	if (choice == 1)
	{
		cout << "That's a good choice!" << endl;
	}
	else if (choice == 2)
	{
		cout << "That's a bad choice." << endl;
	}
	else if (choice == 3)
	{
		cout << "That's a choice a kitty cat would make." << endl;
	}
	else {
		cout << "Choosing not to decide, you still have made a choice." << endl;
	}

	// college
	cout << " " << endl;
	cout << "Please enter the year of college you are in" << endl;
	int year;
	cin >> year;

	// if and else statement
	if (year == 1)
	{
		cout << "You are a freshman" << endl;
	}
	else if (year == 2)
	{
		cout << "You are a sophomore" << endl;
	}
	else if (year == 3)
	{
		cout << "You are a junior" << endl;
	}
	else if (year == 4)
	{
		cout << "You are a senior" << endl;
	}
	else
	{
		cout << "You've tricked the computer!" << endl;
	}

	// switch statement
	switch (year)
	{
	case 1:
		cout << "You are a freshman" << endl;
		break;
	case 2:
		cout << "You are a sophomore" << endl;
		break;
	case 3:
		cout << "You are a junior" << endl;
		break;
	case 4:
		cout << "You are a senior" << endl;
		break;
	default:
		cout << "You've tricked the computer!" << endl;
		break;
	}

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
