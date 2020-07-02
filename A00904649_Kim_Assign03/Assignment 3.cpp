// Assignment 3: Assignment 3.cpp
// Exercise 6.58 from C++ How to Program 9th Edition
 
//Daniel (Yoonho) Kim A00904649
// Feb 03, 2018

#include <iostream>
#include <cstdlib> // include rand function
#include <ctime> // for srand seeding

using namespace std;

// global functions prototypes
void multiplication();
void correctMessage();
void incorrectMessage();

int main() 
{
	multiplication();
	system("pause");
}

void multiplication() 
{
	srand(time(0)); // randomize random number generator using current time

	unsigned int firstNum; // first random number
	unsigned int secondNum; // second random number
	int answer; // answer
	int userAnswer = 0; // user input
	cout << "Enter -1 to End." << endl;
	
	while (userAnswer != -1)
	{
		firstNum = rand() % 10; // random number from 0 to 9
		secondNum = rand() % 10; // random number from 0 to 9
		answer = firstNum * secondNum; // multiplication of two random numbers
	
		// prompt
		cout << "How much is " << firstNum << " times " << secondNum << " (-1 to End)? "; 
		cin >> userAnswer;

		// if user input is correct, run correctMessage() otherwise run incorrectMessage()
		if (userAnswer == answer)
		{
			correctMessage();
		}
		else
		{
			// if user input is incorrect then keep ask for correct answer until 
			// user gets it right or type -1 to exit.
			while (userAnswer != answer && userAnswer != -1)
			{
				incorrectMessage();
				cin >> userAnswer;
			}// end while in if-else

			// for displaying correct message after getting it incorrect
			if (userAnswer == answer) 
			{
				correctMessage();
			}
		}
	} // end while

	cout << "\nThat's all for now. Bye." << endl;

} // end multiplication()


// display random correct messages 1/4.
void correctMessage() 
{
	int choice;
	choice = 1 + rand() % 4;

	switch (choice)
	{
	case 1:
		cout << "Very good!\n" << endl;
		break;
	case 2:
		cout << "Excellent!\n" << endl;
		break;
	case 3:
		cout << "Nice work!\n" << endl;
		break;
	case 4:
		cout << "Keep up the good work!\n" << endl;
		break;
	default: 
		cout << "Should never happen" << endl;
		break;
	}// end switch
} // end correctMessage()

// display random incorrect messages 1/4.
void incorrectMessage() 
{
	int choice;
	choice = 1 + rand() % 4;

	switch (choice)
	{
	case 1:
		cout << "No. Please try again.\n? ";
		break;	
	case 2:
		cout << "Wrong. Try once more.\n? ";
		break; 
	case 3:
		cout << "Don't give up!\n? ";
		break;
	case 4:
		cout << "No, Keep trying.\n? ";
		break;
	default:
		cout << "Should never happen";
		break;
	} // end switch
} // end incorrectMessage()