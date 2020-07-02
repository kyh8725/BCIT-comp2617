// Assingment 4: GCD.h
// template definition of gcd()
// Daniel (Yoonho) Kim A00904649
// Feb. 12, 2018

template <typename T>
T gcd(T x, T y)
{
	T greatest = 1; // current greatest common divisor, 1 is minimum

	// make sure both arguments are positive values
	if (x < 0) 
	{
		x = -x;
	}
	if (y < 0) 
	{
		y = -y;
	}
	
	// loop from 2 to smaller of x and y
	for (int i = 2; i <= ((x < y) ? x : y); i++)
	{
		// if current i divides both x and y
		if (x % i == 0 && y % i == 0)
		{
			greatest = i; // update greatest common divisor
		}
	} // end for

	return greatest; // return greatest common divisor found
}// end function gcd