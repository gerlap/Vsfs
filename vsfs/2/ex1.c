#include <stdio.h>

int main() {
	int	prvni_cislo, druhe_cislo;

	printf("Setridime dve cisla sestupne\n");
	printf("Zadejte prvni cislo: ");
	scanf("%d", &prvni_cislo);
	printf("Zadejte druhe cislo: ");
	scanf("%d", &druhe_cislo);

	if (prvni_cislo > druhe_cislo)
	{
		printf("Setridena cisla jsou %d, %d\n", prvni_cislo, druhe_cislo);
	}
	else
	{
		printf("Setridena cisla jsou %d, %d\n", druhe_cislo, prvni_cislo);
	}
	return 0;
}
