#include <vector>

double calcAverage(const std::vector<int> &values)
{
	// your code
	if (values.size() == 0)
	{
		return 0;
	}
	else
	{
		double avg = 0;
		double sum = 0;
		for (unsigned i = 0; i < values.size(); i++)
		{
			sum += values.at(i);
		}
		avg = sum / values.size();
		return avg;
	}
}