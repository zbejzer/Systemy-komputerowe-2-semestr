#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define LW (5)
#define LK (6)

void wyswietlTablice(int tablica[LW][LK]);

int main(void)
{
    int tablica[LW][LK];
    int k = 0, w = 0, nr = 1;
    
    // First array
    for (w = 0; w < LW; w++)
    {
        for (int _w = w, _k = k; _w >= 0 && _k < LK; _w--, _k++)
        {
            tablica[_w][_k] = nr;
            nr++;
        }
    }
    w--;        // Compensate for the last loop
    for (k = 1; k < LK; k++)
    {
        for (int _w = w, _k = k; _w >= 0 && _k < LK; _w--, _k++)
        {
            tablica[_w][_k] = nr;
            nr++;
        }
    }

    wyswietlTablice(tablica);
    printf("\n");
    k = 0, w = 0, nr = 1;

    // Second array
    for (k = 0; k < LK; k++)
    {
        for (w = 0; w <= k; w++)
        {
            tablica[w][k] = nr;
            nr++;
        }
        w--;        // Compensate for the last loop
        for (int _k = k - 1; _k >= 0; _k--)
        {
            tablica[w][_k] = nr;
            nr++;
        }
    }

    wyswietlTablice(tablica);
    printf("\n");
    k = 0, w = 0, nr = 1;

    // Third array
    int offset = 0;
    for (nr = 1; nr <= LW * LK;)
    {
        for (int i = k; i < LK - offset && nr <= LW * LK; k++, i++)
        {
            tablica[w][k] = nr;
            nr++;
        }
        k--, w++;

        for (int i = w; i < LW - offset && nr <= LW * LK; w++, i++)
        {
            tablica[w][k] = nr;
            nr++;
        }
        k--, w--;

        for (int i = k; i >= offset && nr <= LW * LK; k--, i--)
        {
            tablica[w][k] = nr;
            nr++;
        }
        k++, w--;
        offset++;

        for (int i = w; i >= offset && nr <= LW * LK; w--, i--)
        {
            tablica[w][k] = nr;
            nr++;
        }
        k++, w++;
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