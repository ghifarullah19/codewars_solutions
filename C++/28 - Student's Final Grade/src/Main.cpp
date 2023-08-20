int final_grade(int exam, int projects)
{
	int result = 0;

	if (exam > 90 || projects > 10)
	{
		result = 100;
	}
	else if (exam > 75 && projects >= 5)
	{
		result = 90;
	}
	else if (exam > 50 && projects >= 2)
	{
		result = 75;
	}
	else
	{
		result = 0;
	}

	return result;

	// return (exam > 90 || projects > 10) ? 100 : (exam > 75 && projects >= 5) ? 90 : (exam > 50 && projects >= 2)	 ? 75 : 0;
}