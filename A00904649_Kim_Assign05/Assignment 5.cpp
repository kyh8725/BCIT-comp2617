// Assignment 5: Assignment 5.cpp
// Exercise 7.13 from C++ How to Program 9th Edition
// Author: Daniel (Yoonho) Kim A00904649
// Date: Feb. 25, 2018

#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

const size_t arraySize = 20; // array size
const int MIN = 10; // minimun int allowed by user to enter 
const int MAX = 100; // maximum int allowed by user to enter
bool isUnique(unsigned int, array<unsigned int, arraySize>); // global function prototype

int main() 
{
	// initiallizing array - size of 20 storing unsigned int.
	array <unsigned int, arraySize> arrayUnique = {};
	
	// while loop counter
	unsigned int counter = 1;
	
	while (counter <= arraySize) 
	{	
		unsigned int unique = 0; // stores user input number
		
		// prompt - user to enter numbers
		cout << "\nEnter # " << counter << " : "; 
		cin >> unique;

		// checks if the input int is between 10 - 100 inclusive 
		if (unique >= MIN && unique <= MAX) 
		{
			/* 
			   if the number entered is unique
			   it will print out a message indicating that the number is unique
			   otherwise no message printed.
			   unique numbers will be added to the array
			*/
			if (isUnique(unique, arrayUnique))
			{
				cout << "The number: " << unique << " is unique" << endl;
				arrayUnique[counter-1] = unique;
			} // end inner if
			counter++;
		} // end if
		else
		{
			cout << "The number entered is not in the valid range of 10 to 100" << endl;
		}// end if-else

	}// end while

	cout << "\n\nThe unique numbers are:\n\n";

	for (size_t i = 0; i < arrayUnique.size(); ++i)
	{
		static int counter = 0;

		//if the int in array is not 0 print out the values
		if (arrayUnique[i] != 0)
		{
			cout << setw(6) << arrayUnique[i];
			counter++;

			// for printing out 5 result each line
			if (counter % 5 == 0)
			{
				cout << "\n";
			}// end if

		}// end if
	}// end for

	cout << "\n\n";
	system("pause");
	return 0;

} // end main()

// takes unsigned int, and array<unsigned int, 20> as parameter and checks 
// if the unsigned int passed is already exist in the array
bool isUnique(unsigned int input, array<unsigned int, arraySize> unique)
{
	bool isUnique = true;

	for (size_t i = 0; i < unique.size(); ++i)
	{
		if (unique[i]==input)
		{
			isUnique = false;
		}// end if
	}// end for
	return isUnique;
} // end isUnique()
