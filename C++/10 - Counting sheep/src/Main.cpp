#include <vector>

int count_sheep(std::vector<bool> arr)
{
	int count = 0;
	for (bool it : arr)
	{
		if (it == true)
		{
			count++;
		}
	}
	return count;
}