// FileStream.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


// don't get it yet
int main()
{
    // file streams open and read files, this will save and load user data
	// declares the variable
	
	// writing
	fstream fileStream;
	// opens a text file
	fileStream.open("test.txt", ios::out);
	// check if the file was opened successfully
	if (fileStream.is_open())
	{
		cout << "The file has opened :)" << endl;
		fileStream << "Saving this to the file." << endl;
	}
	fileStream.close();

	// reading
	fileStream.open("test.txt", ios::in);
	string readWord;
	string readLine;
	if (fileStream.is_open()) {
		fileStream >> readWord;
		cout << readWord << endl;
		getline(fileStream, readLine);
	}
	fileStream.close();

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
