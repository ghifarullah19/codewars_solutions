#include <string>

bool feast(std::string beast, std::string dish)
{
	// your code here
	return (beast[0] == dish[0] && beast[beast.length() - 1] == dish[dish.length() - 1]);
}