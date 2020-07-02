#pragma once

// Assignment 1: Employee.h
// Definition of Employee class.

// Daniel (Yoonho) Kim A00904649
// Jan. 21, 2018

#include <string>

class Employee
{
public:
	Employee(std::string, std::string, int); // constructor initializes first name, last name, and monthly salary
	std::string getFirstName() const; // return the first name of employee
	std::string getLastName() const; // return the last name of employee
	int getMonthlySalary() const; // return the montly salary of employee
	void setFirstName(std::string); // set the first name of employee
	void setLastName(std::string); // set the last name of employee
	void setMonthlySalary(int); // set the monthly salary of employee

private:
	int monthlySalary; // data member that stores monthly salary
	std::string firstName; // data member that stores first name
	std::string lastName; // data member that stores last name
}; // end class Employee