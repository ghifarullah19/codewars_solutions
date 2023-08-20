#define _USE_MATH_DEFINES
#include <cmath>

double square_area(double A)
{
	double r = A / (0.25 * M_PI * 2);
	return round((r * r) * 100.0) / 100.0;
};