// ExperimentCoding1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int age = 15;
	cout << "Hi I'm Hannah! It's nice to meet you." << endl;
	cout << "Welcome to my first program!" << endl; 
	cout << "I am " << age << " years old." << endl;
	cout << "What is your name?" << endl;
	string yourName;
	cin >> yourName;
	cout << "Hi " << yourName << "! I'm excited to work with you." << endl;
	cout << "How old are you?" << endl;
	int yourAge;
	cin >> yourAge;
	if (yourAge > age)
	{
		cout << "You are " << yourAge-age << " years older than me!" << endl;
	}
	else 
	{ 
		cout << "You are " << age-yourAge << " years younger than me!" << endl; 
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
