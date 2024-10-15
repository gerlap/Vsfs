#include <stdio.h>
#include <stdlib.h>

typedef enum {
    TezkaPodvyziva,
    Podvaha,
    OptimalniVaha,
    Nadvaha,
    ObezitaPrvnihoStupne,
    ObezitaDruhehoStupne,
    ObezitaTretihoStupne    
} BMICategory;

BMICategory SpoctiBMI2(double vyska, double vaha) {
    double bmi = vaha / (vyska * vyska);

    if (bmi < 16.5) return TezkaPodvyziva;
    else if (bmi < 18.5) return Podvaha;
    else if (bmi < 25) return OptimalniVaha;
    else if (bmi < 30) return Nadvaha;
    else if (bmi < 35) return ObezitaPrvnihoStupne;
    else if (bmi < 40) return ObezitaDruhehoStupne;
    else return ObezitaTretihoStupne;
}
