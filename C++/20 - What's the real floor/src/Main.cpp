int getRealFloor(int f)
{
	int result = 0;
	if (f == 0)
	{
		result = 0;
	}
	else if (f < 0)
	{
		result = f;
	}
	else if (f < 13)
	{
		result = f - 1;
	}
	else if (f >= 13)
	{
		result = f - 2;
	}

	return result;
}