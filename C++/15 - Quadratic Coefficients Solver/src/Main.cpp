#include <tuple>

std::tuple<int, int, int> quadratic(int x1, int x2)
{
	// Answer in tuple
	int b = -1 * (x1 + x2);
	int c = x1 * x2;
	int a = 1;

	std::tuple<int, int, int> result{a, b, c};
	return result;
}