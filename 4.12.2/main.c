#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h> 
 
int main(int argc, char** argv) { 
    int i = 0, suma = 0, cyfKontr, ean [13] = {}; 
    char znak; 
 
    printf("Podaj kod EAN-13: "); 

    // Program wczytywał jedynie 12 cyfr.
    while (scanf("%c", &znak) && (i < 13)) {  
        ean[i] = znak - 48; 
        i++; 
    } 

    // Pętla iterowała jedynie 11 razy, zaczynajac od drugiego elementu tablicy
    for (i = 0; i < 12; i++) { 
        if ((i + 1) % 2) { 
            suma += 1 * ean[i]; 
        } else { 
            suma += 3 * ean[i]; 
        } 
    } 
 
    suma %= 10;
    // Instrukcja warunkowa if dzialala w odwrotnych przypadkach niz powinna
    if (!suma) { 
        cyfKontr = 0; 
    } else { 
        cyfKontr = 10 - suma; 
    } 
    
    // 13 cyfra w tablicy posiada 12 indeks, odwolywanie sie do pamieci z poza zakresu.
    // pojedynczy znak = zamiast ==
    if (cyfKontr == ean[12]) { 
        printf("OK. Kod EAN-13 poprawny\n"); 
    } else { 
        printf("Blad. Kod EAN-13 niepoprawny\n"); 
    } 
 
    _getch(); 
    return (EXIT_SUCCESS); 
}