#include <stdio.h>
#include <stdlib.h>

const char *odmiana(int n, char forma_1[], char forma_2[], char forma_3[]);

int main(int argc, char **argv)
{
    int b, w, z;

    printf("Podaj pierwotna liczbe owiec: ");
    scanf("%i", &b);
    printf("Podaj liczbe wilkow: ");
    scanf("%i", &w);
    printf("Podaj liczbe zjedzonych owiec: ");
    scanf("%i", &z);

    if (b >= 1 && w >= 1 && z >= 0 && b >= z)
    {
        printf("Na lace %s ", odmiana(b, "pasla", "pasly", "paslo"));
        printf("sie %d %s. ", b, odmiana(b, "owca", "owce", "owiec"));
        printf("Wieczorem %s %d ", odmiana(w, "przyszedl", "przyszly", "przyszlo"), w);
        printf("%s i ", odmiana(w, "wilk", "wilki", "wilkow"));
        printf("%s ", odmiana(w, "zjadl", "zjdaly", "zjadly"));
        printf("%d %s. Rano na lace ", z, odmiana(z, "owce", "owce", "owiec"));
        if (b - z > 0)
        {
            printf("%s juz tylko %d %s.\n", odmiana(b - z, "byla", "byly", "bylo"), b - z, odmiana(b - z, "owca", "owce", "owiec"));
        }
        else
        {
            printf("nie bylo juz owiec.\n");
        }
    }
    else
    {
        printf("Niepoprawne dane!\n");
    }

    getchar();
    return (EXIT_SUCCESS);
}

const char *odmiana(int n, char forma_1[], char forma_2[], char forma_3[])
{
    if (n == 1)
    {
        return forma_1;
    }
    else
    {
        switch (n % 100)
        {
        case 12:
        case 13:
        case 14:
            return forma_3;
            break;
        default:
            int n_10 = n % 10;

            if (n_10 >= 2 && n_10 <= 4)
            {
                return forma_2;
            }
            else
            {
                return forma_3;
            }

            break;
        }
    }
}