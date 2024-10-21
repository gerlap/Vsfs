
#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>

bool JeSestupne(int pole[], int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (pole[i] < pole[i + 1])
		{
			return (false);
		}
	i++;
	}
	return (true);
}
