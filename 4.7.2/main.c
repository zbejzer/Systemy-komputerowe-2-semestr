#include <stdio.h>
#include <stdlib.h>

#define LW (4)
#define LK (4)

void wyswietlTablice(int tablica[LW][LK]);

int main(void)
{
    int tablica[LW][LK];
    int w, k;

    for (w = 0; w < LW; w++)
    {
        for (k = 0; k < LK; k++)
        {
            tablica[w][k] = w * LK + k + 1;
        }
    }

    wyswietlTablice(tablica);
    printf("\n");

    for (w = 0; w < LW; w++)
    {
        for (k = 0; k < LK; k++)
        {
            tablica[w][k] = k + w + 1;
        }
    }

    wyswietlTablice(tablica);
    printf("\n");

    for (w = 0; w < LW; w++)
    {
        for (k = 0; k < LK; k++)
        {
            if( w % 2 == 0 )
            {
                tablica[w][k] = w * LK + k + 1;
            }
            else
            {
                tablica[w][k] = LW + w * LK - k;
            }
        }
    }

    wyswietlTablice(tablica);

    getchar();
    return (EXIT_SUCCESS);
}

void wyswietlTablice(int tablica[LW][LK])
{
    int w, k;

    for (w = 0; w < LW; w++)
    {
        for (k = 0; k < LK; k++)
        {
            printf("%3d", tablica[w][k]);
        }
        printf("\n");
    }
}