#include <stdio.h>

int main() {
    printf("Vsechna dvojciferna cisla jsou: ");

    for(int i = 10; i <= 99; i++) {
        if (i != 99)
            printf("%d, ", i);
        else
            printf("%d", i);
    }
    printf("\n");
    return 0;
}
