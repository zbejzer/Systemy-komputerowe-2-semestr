#include <stdio.h>
#include <stdlib.h>

void wyswietlTab(int *tablica, int lW, int lK);
void wypelnijA(int *tablica, int lW, int lK);
void wypelnijB(int *tablica, int lW, int lK);

int main(void)
{
    // deklaracje zmiennych lokalnych
    int *tablica; // tablica do wypelnienia
    int lW, lK;   // liczba wierszy i kolumn

    printf("Podaj liczbe wierszy: ");
    scanf("%iu", &lW);
    printf("Podaj liczbe kolumn: ");
    scanf("%iu", &lK);

    tablica = (int *)calloc(lW * lK, sizeof(int)); // rezerwacja pamieci
    if (tablica != NULL)
    {                                 // kontrola przydzialu pamiecie
        wypelnijA(tablica, lW, lK);   // wstawianie wartosci do tablicy
        wyswietlTab(tablica, lW, lK); // wyswietlanie gotowej tablicy
        printf("\n");
        wypelnijB(tablica, lW, lK); 
        wyswietlTab(tablica, lW, lK);

        free(tablica); // zwolnienie pamieci
    }
    else
    {
        printf("Blad przydzialu pamieci!\n");
    }

    getchar();
    return (EXIT_SUCCESS);
}

// wyswietlanie tablicy
void wyswietlTab(int *tablica, int lW, int lK)
{
    int w, k; // numer kolumny i wiersza, zmienne lokalne

    // wyswietlanie gotowej tablicy
    for (w = 0; w < lW; w++)
    {
        for (k = 0; k < lK; k++)
        {
            printf("%3i", tablica[w * lK + k]);
        }
        printf("\n");
    }
}

// wypelnianie tablicy wzorem A
void wypelnijA(int *tablica, int lW, int lK)
{
    int w, k; // numer kolumny i wiersza, zmienne lokalne
    int nr;   // numer do wpisania

    nr = 0;
    for (w = 0; w < lW; w++)
    { // petla "po wierszach"
        for (k = 0; k < lK; k++)
        { // petla "po kolumnie w danym wierszu"
            nr++;
            tablica[w * lK + k] = nr; // wstawianie elementow w odpowiednie miejsca
                                      // w pamieci, względem początku tablicy
        }
    }
}

// wypelnianie tablicy wzorem B
void wypelnijB(int *tablica, int lW, int lK)
{
    int w, k, nr = 1;

    for (w = 0; w < lW; w++)
    {
        for (k = 0; k < lK; k++)
        {
            if (w % 2 == 0 && k % 2 == 0)
            {
                tablica[w * lK + k] = nr;
                nr++;
            }
            else
            {
                tablica[w * lK + k] = 0;
            }

        }
    }
}