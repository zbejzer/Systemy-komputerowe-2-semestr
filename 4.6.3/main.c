#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number, divisiors_count, divisiors_sum;

    printf("Podaj liczbe: ");
    scanf("%d", &number);

    divisiors_count = 1;
    divisiors_sum = number;

    printf("Dzielniki naturalne tej liczby: ");

    for(int i = 1; i <= number / 2; i++)
    {
        if( number%i == 0 )
        {
            printf("%d, ", i);
            divisiors_count++;
            divisiors_sum += i;
        }
    }
    printf("%d\n", number);
    printf("Znaleziono dzielnikow: %d\n", divisiors_count);
    printf("Suma dzielnikow: %d\n", divisiors_sum);

    if (divisiors_count == 2)
    {
        printf("Podana liczba jest liczba pierwsza.\n");
    }

    getchar();
    return (EXIT_SUCCESS);
}