#include <string>

std::string update_light(std::string current)
{
	// Your Code here
	return current == "green" ? "yellow" : current == "yellow" ? "red" : "green";
}