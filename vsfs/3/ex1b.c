#include <stdio.h>

typedef enum
{
    Zakladni = 21,
    PrvniSnizena = 15,
    DruhaSnizena = 10
} DPH;

double SpoctiDPH2(double cena, DPH sazba)
{
    return cena * (1 + sazba / 100.0);
}
