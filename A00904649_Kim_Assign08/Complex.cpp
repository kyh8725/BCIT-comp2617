// Assignment 8: Complex.cpp
// Member-function definitions for class Complex
// Author: Daniel (Yoonho) Kim
// Date: Mar 18, 2018

#include "Complex.h"
#include <iostream>
#include <iomanip>

using namespace std;

// ctor - requires arguments if not provided - default arguments used 
Complex::Complex(double real, double imagine) 
{
	setRealNum(real);
	setImaginaryNum(imagine);
}

// adds two complex numbers: 
// adds real numbers together and imaginary numbers together
const Complex & Complex::plusEq(const Complex & op) 
{
	realNum += op.realNum;
	imaginaryNum += op.imaginaryNum;

	return (*this);
}
// subtract two complex numbers:
// real number from right operand is subtracted from the left
// imaginary number from right operand is subtracted from the left
const Complex & Complex::minusEq(const Complex & op) 
{
	realNum -= op.realNum;
	imaginaryNum -= op.imaginaryNum;

	return (*this);
}

//returns real number
double Complex::getRealNum() const
{
	return realNum;
}

//returns imaginary number
double Complex::getImaginaryNum() const
{
	return imaginaryNum;
}

// sets real number
void Complex::setRealNum(double real) 
{
	realNum = real;
}

// sets imaginary number
void Complex::setImaginaryNum(double imagine) 
{
	imaginaryNum = imagine;
}

// display numbers in specific format
void Complex::display(void) const
{
	cout << fixed << setprecision(4);
	cout << "( " << getRealNum() << " , " << getImaginaryNum() << " )";
}