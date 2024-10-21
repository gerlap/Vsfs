#include <stdio.h>
#include <stdbool.h>

int	prirazeni = 0;
int	porovnani = 0;

void	Prirazeni(int *a, int b)
{
	*a = b;
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

void SelectionSort(int arr[], size_t size)
{
	int i, tmp, j, tmp_swap;

	i = 0;
	j = 0;
	tmp_swap = 0;
	while(j < size)
	{
		tmp = j;
		while(i < size)
		{
		if(JeMensi(arr[tmp], arr[i]))
			tmp = i;
		i++;
		}
	tmp_swap = arr[j];
	Prirazeni(&arr[j], arr[tmp]);
	Prirazeni(&arr[tmp], tmp_swap);
	j++;
	i = j;
	}
}
void InsertionSort(int arr[], size_t size)
{
	int i;

	i = 1;
	while (i < size)
	{
		int key = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] < key)
		{
			Prirazeni(&arr[j + 1], arr[j]);
			j--;
		}
		Prirazeni(&arr[j + 1], key);
		i++;
	}
}

int main() {
	int arr[] = {60, 97, 77, 47, 41, 43, 61, 18, 4, 19, 48, 54, 49, 62, 90, 96, 32, 72, 8, 23, 27, 29, 33, 2, 34, 81, 36, 88, 42, 92, 70, 39, 99, 1, 63, 79, 6, 30, 13, 10, 26, 52, 35, 40, 82, 64, 80, 69, 56, 66, 89, 86, 53, 85, 21, 15, 98, 20, 51, 100, 68, 94, 9, 24, 50, 71, 55, 31, 44, 83, 93, 37, 7, 87, 65, 95, 16, 59, 46, 58, 38, 17, 78, 45, 76, 73, 28, 5};
	//int arr[] = {100, 2, 3, 4};
	size_t size = sizeof(arr) / sizeof(arr[0]);
	size_t i = 0;

	//InsertionSort(arr, size);
	SelectionSort(arr, size);
	printf("Sorted array (descending): \n");

	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	printf("Number of assignments: %d\n", prirazeni);
	printf("Number of comparisons: %d\n", porovnani);

	return 0;
}

