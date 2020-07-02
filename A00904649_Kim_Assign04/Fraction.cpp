// Assignment 4: Fraction.cpp
// Member-function definitions for class Fraction.
// Author: Daniel (Yoonho) Kim A00904649
// Date: Feb. 12, 2018

#include "Fraction.h" // include definition of class Fraction from Fraction.h
#include "GCD.h" // template function for calculating greatest common divisor
#include <iostream>
using namespace std;

// default ctor
Fraction::Fraction(void)
{
	numerator = 0;
	denominator = 1;
}

// second ctor, which requires 2 parameters
Fraction::Fraction(long long num, long long denom)
{
	numerator = num;
	denominator = denom;
	simplify();
}

// Implementation of the plusEq() member function
// adds fracton and returns the result

const Fraction & Fraction::plusEq(const Fraction & op)
{
	if (denominator != op.denominator) 
	{
		numerator = (numerator * op.denominator) + (op.numerator *denominator);
		denominator = denominator * op.denominator;
	}
	else
	{
		numerator += op.numerator;
	}

	simplify();  // will make sure that denominator is positive and
				 //   will invoke gcd() function to reduce fraction
				 //   as much as possible
	return (*this);

} // end plusEq()

// Implementation of the minusEq() member function
// substracts fracton and returns the result

const Fraction & Fraction::minusEq(const Fraction & op)
{
	if (denominator != op.denominator)
	{
		numerator = (numerator * op.denominator) - (op.numerator *denominator);
		denominator = denominator * op.denominator;
	}
	else
	{
		numerator -= op.numerator;
	}

	simplify();  // will make sure that denominator is positive and
				 //   will invoke gcd() function to reduce fraction
				 //   as much as possible
	return (*this);
} // end minusEq()

// Implementation of the timesEq() member function
// Performs similar operation as the *= operator on the built-in types
const Fraction & Fraction::timesEq(const Fraction & op )
{
	numerator *= op.numerator;
	denominator *= op.denominator;

	simplify();  // will make sure that denominator is positive and
	             //   will invoke gcd() function to reduce fraction
	             //   as much as possible

	return (*this); // returns the object which invoked the method
} // end timesEq()

// Implementation of the divideEq() member function
// divides fracton and returns the result
const Fraction & Fraction::divideEq(const Fraction & op)
{
	numerator *= op.denominator;
	denominator *= op.numerator;

	simplify(); // will make sure that denominator is positive and
				//   will invoke gcd() function to reduce fraction
				//   as much as possible

	return (*this); // returns the object which invoked the method
}// end divideEq()


// Implementation of the negate() member function
// returns the negation of the fraction
// must not modify the actual fraction obejct
Fraction Fraction::negate(void) const
{
	return (Fraction(-(numerator), (denominator)));
}

// returns numerator of fraction
long long Fraction::getNum(void) const
{
	return numerator;
}

// returns denominator of fraction
long long Fraction::getDenom(void) const
{
	return denominator;
}

// display fraction
void Fraction::display(void) const 
{
	cout << numerator << '/' << denominator;
}

// Implementation of simplify()
// reduces the fraction as much as possible. 
// ensures that denominator is positive.
void Fraction::simplify(void)
{
	// make sure denominator is positive. by *- both numerator and denominator
	if (denominator < 0)
	{
		denominator = -denominator;
		numerator = -numerator;
	}

	// if there is a common divisor greater than 1
	// reduce the fraction by dividing both numerator and denomitator by the divisior.
	long long divisor = gcd(numerator, denominator);

	if (divisor > 1)
	{
		numerator /= divisor;
		denominator /= divisor;
	}
}