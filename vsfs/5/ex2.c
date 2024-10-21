#include <stdio.h>
#include <stdbool.h>

int	prirazeni = 0;
int	porovnani = 0;

void	Prirazeni(int *a, int b)
{
	int	tmp;

	tmp = *a;
	*a = b;
	b = tmp;
	prirazeni++;
}

bool	JeMensi(int a, int b) {
	porovnani++;
	return a < b;
}

bool	JeVetsi(int a, int b) {
	porovnani++;
	return a > b;
}

