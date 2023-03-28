#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double pi = 3.14159265;

double pKola(double promien);

int main(void)
{
    double promien, pole;

    printf("Podaj promien r: ");
    scanf("%lf", &promien);

    pole = pKola(promien) - 2 * pKola(promien / 2) - 6 * pKola(promien / 8) + 4 * pKola(promien / 4);

    printf("Pole = %5.3lf\n", pole);
    getchar();
    return (EXIT_SUCCESS);
}

double pKola(double promien)
{
    return pi * pow(promien, 2);
}