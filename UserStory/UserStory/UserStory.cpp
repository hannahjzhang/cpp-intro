// UserStory2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "What is your name?" << endl;
	string name;
	cin >> name;

	cout << "What is your favorite animal?" << endl;
	string animal;
	cin >> animal;

	cout << "Who is your good friend?" << endl;
	string goodFriend;
	cin >> goodFriend;

	cout << "How would you describe yourself?" << endl;
	string adjective;
	cin >> adjective;

	cout << "Once upon a time there was a " << animal << " named " << name << "." << endl;
	cout << "It was a " << adjective << " little guy with absolutely no brains." << endl;
	cout << name << " liked to explore the island to find new fruits." << endl;
	cout << "One day as it was roaming around, " << name << "found a giant fruit it had never seen before." << endl;
	cout << "Curious, " << name << " sat next to the fruit and attempted to eat the fruit." << endl;
	cout << "After two hours, " << name << " still could not taste the fruit." << endl;
	cout << "The angry " << animal << " threw the fruit on the ground in exasparation and it exploded" << endl;
	cout << "The next day " << goodFriend << " came and found the remains of the once alive " << animal << endl;

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
