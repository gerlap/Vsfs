#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;

    printf("Zadejte cele cislo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Faktorial neni definovan pro zaporna cisla.\n");
    }
    else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Faktorial cisla %d je %llu.\n", n, factorial);
    }
    return 0;
}
