#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct istota
{
    char nazwa[20];
    float wzrost;
    int masa;
    int wiek;
    bool ogon;
};

int main()
{
    FILE *plik;
    struct istota zwierz;
    char nazwa_pliku[40];

    printf("Podaj nazwe nowego pliku: ");
    scanf("%s", nazwa_pliku);
    plik = fopen(nazwa_pliku, "wb");

    if (plik == NULL)
    {
        printf("Blad. Nie mozna stworzyc pliku!\n");
        return (EXIT_FAILURE);
    }
    else
    {
        printf("Nazwa: ");
        scanf("%s", &zwierz.nazwa);
        printf("Maksymalny wzrost: ");
        scanf("%f", &zwierz.wzrost);
        printf("Maksymalna masa: ");
        scanf("%d", &zwierz.masa);
        printf("Maksymalny wiek: ");
        scanf("%d", &zwierz.wiek);
        printf("Czy posiada ogon ? (0 - nie , 1 - tak ): ");
        scanf("%d", &zwierz.ogon);

        fwrite(&zwierz, sizeof(zwierz), 1, plik);

        fclose(plik);

        printf("Dane zapisane do pliku %s", nazwa_pliku);
    }

    _getch();
    return (EXIT_SUCCESS);
}