#include <stdio.h>
#include <stdlib.h>

int	NejcastejsiPrvek(int* pole, size_t size)
	{
	int*	pocitadlo = (int*)calloc(100, sizeof(int)); // Alokace paměti pro počítadlo
	if (pocitadlo == NULL) {
		return -1; // Chyba při alokaci paměti
	}

	int	nejcastejsi = pole[0];
	int	maxPocet = 0;

	for (int i = 0; i < velikost; i++) {
			pocitadlo[pole[i]]++; // Zvyšujeme počitadlo pro daný prvek
		if (pocitadlo[pole[i]] > maxPocet)
		{
			maxPocet = pocitadlo[pole[i]];
			nejcastejsi = pole[i];
	}
	}
	free(pocitadlo); // Uvolnění paměti
	return nejcastejsi;
}

int main() {
    int pole[] = { 2, 7, 6, 6, 6, 1, 7, 7, 2 };
    int velikost = sizeof(pole) / sizeof(pole[0]);
    int modus = NejcastejsiPrvek(pole, velikost);

    printf("Nejčastější prvek: %d\n", modus); // Výstup: 7
    return 0;
}
