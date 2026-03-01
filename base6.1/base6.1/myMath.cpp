#include <iostream>
#include "myMath.h"

double add(double x, double y)
{
	return x + y;
}
double sub(double x, double y)
{
	return x - y;
}
double mult(double x, double y)
{
	return x * y;
}
double divide(double x, double y)
{
	return x / y;
}
double power(double x, int y)
{
	if (y == 0) { return 1; };

	bool negative{ y < 0 };
	if (negative) { y = -y; };

	double result{ 1.0 };
	while (y > 0) {
		if (y % 2) {
			result *= x;
		}
		x *= x;
		y = y / 2;
	}
	return negative ? 1.0 / result : result;
}