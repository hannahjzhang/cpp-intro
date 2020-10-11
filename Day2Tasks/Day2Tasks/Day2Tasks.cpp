// Day2Tasks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

// method signature - h file
void sum();
void indexOfMaximum();
void numberOfMaximum();
int maxIndex;
void multiplier();

// method in a cpp file
void sum(int a, int b)
{
	cout << a + b;
}

void indexOfMaximum(int nums[])
{
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		if (max <= nums[i])
		{
			max = nums[i];
			maxIndex = i;
		}
	}
	cout << "The index of the maximum in this array is: " << maxIndex << endl;
}

void numberOfMaximum(int nums[])
{
	int max = 0;
	for (int i = 0; i < 5; i++)
	{
		if (max <= nums[i]) 
			max = nums[i];
	}
	cout << "The number of the maximum in this array is: " << max << endl;
}

void multiplier(int nums[])
{
	for (int i = 0; i < 5; i++)
	{
		nums[i] = nums[i] * 10;
	}
	cout << "With the multiplier, the result is: ";
	for (int j = 0; j < 5; j++)
	{
		cout << nums[j] << ", ";
	}
}

// main in the other cpp file
int main()
{
	// sum
	sum(6, 10);
	cout << " " << endl;
	
	// index
	int arr1[5] = { 5, 7, 19, 8, 11 };
	indexOfMaximum(arr1);
	
	// number
	numberOfMaximum(arr1);

	// multiplier
	multiplier(arr1);
	cout << " " << endl;
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

void sum()
{
}
