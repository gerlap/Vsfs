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

void SelectionSort(int arr[], size_t size)
{
	int i, tmp, j;

	i = 0;
	j = 0;
	while(j < size)
	{
		tmp = 0;
		while(i < size)
		{
		if(JeMensi(tmp, arr[i]))
			tmp = arr[i];
		i++;
		}
	Prirazeni(&arr[j], tmp);
	j++;
	i = j;
	}
}
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    SelectionSort(arr, size);

    printf("Sorted array (descending): \n");
    for (size_t i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Number of assignments: %d\n", prirazeni);
    printf("Number of comparisons: %d\n", porovnani);

    return 0;
}

