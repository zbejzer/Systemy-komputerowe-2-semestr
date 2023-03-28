#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double pi = 3.14159265;

int main(void)
{
    double tworzaca, wysokosc, promien, pole_podstawy;

    printf("Podaj tworzaca l: ");
    scanf("%lf", &tworzaca);
    printf("Podaj wysokosc h: ");
    scanf("%lf", &wysokosc);

    promien = sqrt(pow(tworzaca, 2) - pow(wysokosc, 2));
    pole_podstawy = pi * pow(promien, 2);

    printf("Pole = %5.3lf\n", pole_podstawy + pi * promien * tworzaca);
    printf("Objetosc = %5.3lf\n", pole_podstawy * wysokosc / 3);

    getchar();
    return (EXIT_SUCCESS);
}