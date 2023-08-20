#include <functional>

/* Do not copy code below */
bool ran_expected;
void Expected()
{
	ran_expected = true;
}
void Unexpected()
{
	ran_expected = false;
}
/* Do not copy code above */

void _if(bool value, std::function<void(void)> func1, std::function<void(void)> func2)
{
	if (value == true)
	{
		func1();
	}
	else
	{
		func2();
	}
}