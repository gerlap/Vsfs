#include <stdio.h>

int main() {
	int	arr[3], i, j, tmp;

	printf("Setridime dve cisla sestupne\n");
	printf("Zadejte prvni cislo: ");
	scanf("%d", &arr[0]);
	printf("Zadejte druhe cislo: ");
	scanf("%d", &arr[1]);
	printf("Zadejte treti cislo: ");
	scanf("%d", &arr[2]);

	i = 0;
	j = 0;
	tmp = 0;

	while(i < 2)
	{
		while(j < 2 - i)
		{
			if(arr[j] < arr[j+1])
			{
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
			j++;
		}
		i++;
		j = 0;
	}
	printf("Setridena cisla jsou: %d, %d, %d\n", arr[0], arr[1], arr[2]);
	return 0;
}
