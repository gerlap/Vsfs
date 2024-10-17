#include<stdio.h>
#include<unistd.h>
#include <stdlib.h>

int	*ZaokrouhliPole(double *pole, size_t size)
{
	int *intpole = (int*)malloc(size * sizeof(int));
	if (intpole == NULL)
		return (NULL);
	int	i;

	i = 0;
	while(i < size)
	{
		if (pole[i] >= 0)
		{
			intpole[i] = (int)(pole[i] + 0.5);
		}
		else
		{
			intpole[i] = (int)(pole[i] - 0.5);
		}
		i++;
	}
	return(intpole);
}
int	main()
{
	double pole[4] = { 5.12, -3.5996, 156, 7.9 };
	int*	zaokrouhli = ZaokrouhliPole(pole, 4);
	int i = 0;
	if (zaokrouhli != NULL) {
		while (i < 4)
		{
			printf("%d ", zaokrouhli[i]); // Output: 5 -4 156 8
			i++;
		}
		printf("\n");
		free(zaokrouhli); // Free allocated memory
	}
	return 0;
}
