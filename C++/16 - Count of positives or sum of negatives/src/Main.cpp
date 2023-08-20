#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
	// go for it!
	std::vector<int> result;
	if (input.size() == 0)
	{
		return result;
	}
	else
	{
		int count = 0;
		signed sum = 0;

		for (unsigned i = 0; i < input.size(); i++)
		{
			if (input.at(i) > 0)
			{
				count++;
			}
			else
			{
				sum -= input.at(i);
			}
		}
		result.push_back(count);
		result.push_back(sum * -1);
	}
	return result;
}