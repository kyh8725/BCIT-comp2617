// Assignment 8: Complex.h
// Declaration of class Complex.
// Member functions are defined in Complex.cpp
// Author: Daniel (Yoonho) Kim
// Date: Mar 18, 2018

#ifndef Complex_H
#define Complex_H


class Complex
{
public:

	Complex(double = 1 , double = 0); // ctor, with default arguments
	const Complex & plusEq(const Complex & RHS); // adds RHS to Complex object invoked with this method
									 //	(thereby modifying the Complex object) and returns the result
	const Complex & minusEq(const Complex & RHS); // subtract RHS to the Complext object invoiked with this method
	                                  // (thereby modifying the Complex object) and returns the result
	double getRealNum(void) const; // returns real number
	double getImaginaryNum(void) const; // returns imaginary number
	void setRealNum(double); // set real number
	void setImaginaryNum(double);// set imaginary number
	void display(void) const; // display the numbers in specific format

private:

	double realNum, // store real number
		   imaginaryNum; // store imaginary number

}; // end Complex class
#endif