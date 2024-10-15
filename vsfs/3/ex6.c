#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum {
    Kamen = 1,
    Nuzky,
    Papir,
} Tah;


Tah getComputerChoice() {
    return rand() % 3 + 1;
}
int determineWinner(Tah player, Tah computer) {
    if (player == computer) {
        return 0;
    } else if ((player == Kamen && computer == Nuzky) ||
               (player == Nuzky && computer == Papir) ||
               (player == Papir && computer == Kamen)) {
        return 1;
    } else {
        return -1;
    }
}

void printChoice(Tah choice) {
    switch (choice) {
        case Kamen: printf("Kamen"); break;
        case Nuzky: printf("Nuzky"); break;
        case Papir: printf("Papir"); break;
    }
}

int main() {
    srand(time(NULL));

    int playerScore = 0, computerScore = 0;

    printf("Vitejte ve hre kamen – nuzky – papir\n");
    printf("Hrajeme na dve vitezna kola\n");

    while (playerScore < 2 && computerScore < 2) {
        int playerInput;

        printf("Zadejte svuj tah (1 - Kamen, 2 - Nuzky, 3 - Papir): ");
        if (scanf("%d", &playerInput) != 1 || playerInput < 1 || playerInput > 3) {
            printf("Tento tah je neplatny\n");
            while(getchar() != '\n');
            continue;
        }

        Tah playerChoice = (Tah)playerInput;
        Tah computerChoice = getComputerChoice();

        printf("Hrac zahral ");
        printChoice(playerChoice);
        printf(", pocitac zahral ");
        printChoice(computerChoice);
        printf("\n");

        int result = determineWinner(playerChoice, computerChoice);
        if (result == 0) {
            printf("Toto kolo je nerozhodne\n");
        } else if (result == 1) {
            printf("Toto kolo vyhral hrac\n");
            playerScore++;
        } else {
            printf("Toto kolo vyhral pocitac\n");
            computerScore++;
        }

        printf("Celkove skore: hrac %d – pocitac %d\n", playerScore, computerScore);
    }

    if (playerScore == 2) {
        printf("Celou hru vyhral hrac\n");
    } else {
        printf("Celou hru vyhral pocitac\n");
    }

    return 0;
}
