// LoopsPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// break
	for (int count = 10; count >= 0; count--) {
		if (count == 5) {
			break;
		}
		cout << count << endl;
		if (count == 0) {
			cout << "Blastoff!" << endl;
		}
	}
	// a break statement exits the loop after a condition is true

	// continue
	for (int count = 10; count >= 0; count--) {
		if (count == 5) {
			continue;
		}
		cout << count << endl;
		if (count == 0) {
			cout << "Blastoff!" << endl;
		}
	}
	// a continue statement skips one round of the loop and then continues

	// while loop
	cout << "While Loop" << endl;
	cout << "Please give a number greater than zero." << endl;
	int count;
	cin >> count;

	while (count > 0)
	{
		count--;
		cout << count << endl;
	}
	if (count == 0)
	{
		cout << "Blastoff!" << endl;
		cout << "U ded" << endl;
	}

	cout << " " << endl;

	// for loop
	cout << "For Loop" << endl;
	for (count = 5; count > 0; count--)
	{
		cout << count << endl;
	}
	cout << "Blastoff!" << endl;
	cout << "And i oop" << endl;

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
