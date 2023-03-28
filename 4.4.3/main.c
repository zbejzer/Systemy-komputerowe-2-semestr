#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int side_a, side_b, side_c;

    printf("Podaj dlugosc boku a = ");
    scanf("%d", &side_a);
    printf("Podaj dlugosc boku b = ");
    scanf("%d", &side_b);
    printf("Podaj dlugosc boku c = ");
    scanf("%d", &side_c);

    if (side_a <= 0 || side_b <= 0 || side_c <= 0)
    {
        printf("Podane dlugosci bokow sa nieprawidlowe.\n");
    }
    else
    {
        // Ustawienie najdluzszego boku jako C
        if (side_a > side_b)
        {
            int temp = side_b;
            side_b = side_a;
            side_a = temp;
        }
        if (side_b > side_c)
        {
            int temp = side_c;
            side_c = side_b;
            side_b = temp;
        }

        if (side_a + side_b <= side_c)
        {
            printf("Z podanych bokow nie da sie zbudowac trojkata.\n");
        }
        else
        {
            printf("Z podanych bokow da sie zbudowac trojkat");

            if (side_a == side_b)
            {
                if (side_b == side_c)
                {
                    printf(" rownoboczny,");
                }
                else
                {
                    printf(" rownoramienny,");
                }
            }

            if (pow(side_a, 2) + pow(side_b, 2) == pow(side_c, 2))
            {
                printf(" prostokatny.\n");
            }
            else if (pow(side_a, 2) + pow(side_b, 2) < pow(side_c, 2))
            {
                printf(" rozwartokatny.\n");
            }
            else
            {
                printf(" ostrokatny.\n");
            }
        }
    }

    getchar();
    return (EXIT_SUCCESS);
}