// Assignment 2: Assignment2.cpp

// Daniel (Yoonho) Kim A00904649
// Jan. 28, 2018

#include <iostream>
#include <cctype>

using namespace std;

//function main begins program execution
int main()
{
	cout << "10 Roman numeral values will be input and converted into \ntheir equivalent Hindu - Arabic numeric values." << endl;

	char c; // storing user input
	int previous; // storing previous value
	int num = 0; // int for calculation - representing the char input
	int sum = 0; // store calculated sum to be displayed
	int counter = 1; // counter for for loops.
	bool validation = true; // for diplaying sum value only when input is valid.

	// loops 10 times - ask user to input roman numerals to convert
	for (counter = 1; counter <= 10; counter++) {

		cout << "\nInput Roman numeral # " << counter << ": "; // prompt
		
		// resets the sum and arabic to 0, and set validation to true for fresh while loop
		num = 0;
		sum = 0;
		previous = 0;
		validation = true;
		
	
		while (validation && (c=cin.get()) != '\n') // continue to loop until the validation is true and input is not '\n'
		{
			c = toupper(c); // set input char to uppercase
			switch (c)
			{
			case 'I': num = 1;	cout << c;
				break;

			case 'V': num = 5;  cout << c;
				break;

			case 'X': num = 10; cout << c;
				break;

			case 'L': num = 50; cout << c;
				break;

			case 'C': num = 100; cout << c;
				break;

			case 'D': num = 500; cout << c;
				break;

			case 'M': num = 1000; cout << c;
				break;

			default: validation = false; // sets validation to false for not displaying sum value.
	      			 cin.ignore(250,'\n'); // extract and discard chars in cin when default case is executed.
					 cout << c << " Error - last character was not valid!!!" << endl;
				break;
			} // end switch
			
			  //if previous value is smaller than current input then double the previous amount and substract from the current value.
			if (previous < num) 
			{
				sum += (-previous * 2) + num;
			}
			else
			{
				sum += num;
			}

			previous = num;  // set the previous value to current value before next cycle
			
		} //end while

		// total is displayed only when the user input is valid.
		if (validation) 
		{
			if (sum < 0) 
			{
				sum = sum * -1;
			}
			cout << " = " << sum << endl;
		} 

	} // end for

	cout << "\nTHAT'S ALL FOLKS :)" << endl;
	system("pause");
}