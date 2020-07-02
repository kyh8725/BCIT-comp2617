// Assignment 1: Employee.cpp
// Member-function definitions for class Employee.

// Daniel (Yoonho) Kim A00904649
// Jan. 21, 2018

#include <iostream>
#include "Employee.h" // include definition of class Employee

using namespace std;

const int MIN_CHAR = 2; // const variable for minimum characters for first and last name

// Employee constructor initializes first name, last name, and monthly salary
Employee::Employee(string firstName, string lastName, int monthlySalary) 
{
	if (firstName.size() > MIN_CHAR)
	{
		this->firstName = firstName; // initialize first name
	}
	else
	{	// initialize first name but prints out error message that it did not meet the requirement.
		this->firstName = firstName;
		cout << "\nWarning - invalid length string entered for first name in ctor: " << firstName << endl;
		cout << "The string that was enetered will be used for now." << endl;
	}

	if (lastName.size() > MIN_CHAR)
	{
		this->lastName = lastName; // initialize last name
	}
	else
	{	// initialize last name but prints out error message that it did not meet the requirement.
		this->lastName = lastName;
		cout << "\nWarning - invalid length string entered for last name in ctor: " << lastName << endl;
		cout << "The string that was enetered will be used for now." << endl;
	}

	if (monthlySalary >= 0)
	{
		this->monthlySalary = monthlySalary; // initialize monthly salary
	}
	else
	{
		// initialize monthly salary but prints out error message that it did not meet the requirement and set it to 0.
		this->monthlySalary = 0;
		cout << "\nInvalid salary amount specified in ctor: $" << monthlySalary << endl;
		cout << "Salary set to $0 instead" << endl;
	}

} // end Employee constructor

// function to get the first name of employee
string Employee::getFirstName() const
{
	return firstName;
} // end function getFirstName

  // function to get the last name of employee
string Employee::getLastName() const 
{
	return lastName;
} // end function getLastName

  // function to get the the montly salary of employee
int Employee::getMonthlySalary() const 
{
	return monthlySalary;
} // end function getMonthlySalary

// function to set first name of employee
// ensures that firstname has at least 2 characters
void Employee::setFirstName(string firstName) 
{
	if (firstName.size() >= MIN_CHAR)
	{
		this->firstName = firstName; // set first name to user input
	}
	else
	{	// error message when user input is less than 2 characters long
		cerr << "\nERROR - invalid length string entered for first name in setFirstName(): " << firstName << endl; 
		cout << "The first name was left unchanged: " << getFirstName() << endl;
	}
} // end function setFirstName

  // function to set last name of employee
  // ensures that lastname has at least 2 characters
void Employee::setLastName(string lastName)
{
	if (lastName.size() >= MIN_CHAR)
	{
		this->lastName = lastName; // set last name to user input
	}
	else
	{	// error message when user input is less than 2 characters long
		cerr << "\nERROR - invalid length string entered for last name in setLastName(): " << lastName << endl; 
		cout << "The last name was left unchanged: " << getLastName() << endl;
	}

} // end function setLastName

// function to set monthly salary of employee
void Employee::setMonthlySalary(int monthlySalary)
{
	if (monthlySalary >= 0)
	{
		this->monthlySalary = monthlySalary; // set monthly salary to user input
	}
	else 
	{	// error message when salary input is not a positive value
		cerr << "\nERROR - Invalid salary amount specified : $" << monthlySalary << endl; 
		cout << "Salary was left unchanged at: $" << getMonthlySalary() << endl;

	}

} // end function setMonthlySalary