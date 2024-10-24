#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
int main() {
    int num1, num2;

    printf("Spocteme nejmensi spolecny nasobek cisel\n");
    printf("Zadej prvni cislo: ");
    scanf("%d", &num1);
    printf("Zadej druhe cislo: ");
    scanf("%d", &num2);

    if (num1 == 0 || num2 == 0) {
        printf("Nejmensi spolecny nasobek neni definovan pro nulove cislo.\n");
    } else {
        printf("Nejmensi spolecny nasobek je %d\n", lcm(num1, num2));
    }
    return 0;
}
