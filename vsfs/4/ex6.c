#include <stdio.h>
#include <stdlib.h>

int NejcastejsiPrvek(int* pole, size_t size)
{
	int	most_frequent = pole[0];
	int	max_count = 0;
	int	max_value = pole[0];
	int i = 0;

	while (i < size)
	{
		if (pole[i] > max_value)
			max_value = pole[i];
		i++;
	}
	//printf("%d\n", max_value); to make inner array with possible values
	int* counts = (int*)calloc(max_value + 1, sizeof(int));
	if (!counts)
		return (-1);
	i = 0;
	while (i < size)
	{

		counts[pole[i]]++;
		printf(" %dp", counts[pole[i]]);
		if (counts[pole[i]] > max_count)
		{
			max_count = counts[pole[i]];
			most_frequent = pole[i];
		}
	i++;
	}
	free(counts);
	return (most_frequent);
}

int main()
{
	int pole[] = { 2, 7, 6, 6, 1, 7, 12, 2, 7 };
	int size = sizeof(pole) / sizeof(pole[0]);
	int mode = NejcastejsiPrvek(pole, size);
	printf("Nejčastější prvek: %d\n", mode);
	return 0;
}

