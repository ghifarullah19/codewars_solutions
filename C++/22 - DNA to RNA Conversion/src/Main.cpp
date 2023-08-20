#include <string>

std::string DNAtoRNA(std::string dna)
{
	char temp[dna.length()];
	std::string result = "";
	int i;
	for (i = 0; i < sizeof(temp); i++)
	{
		temp[i] = dna[i];
		if (temp[i] == 'T')
		{
			temp[i] = 'U';
			result += temp[i];
			continue;
		}
		result += temp[i];
	}
	return result;
}

// #include <bits/stdc++.h>
// std::string DNAtoRNA(std::string dna)
// {
// 	std::replace(dna.begin(), dna.end(), 'T', 'U');
// 	return dna;
// }