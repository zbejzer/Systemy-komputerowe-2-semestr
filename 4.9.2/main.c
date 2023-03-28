#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main(void)
{

    wchar_t klawisz_1;

    printf("Wciskaj klawisze; koniec = ESC\n");

    do
    {
        klawisz_1 = _getch();

        if ((klawisz_1 == 0) || (klawisz_1 == 224))
        {
            if (kbhit())
            {
                _getch();
            }
        }

        klawisz_1 = toupper(klawisz_1);

        switch (klawisz_1)
        {
        case 65:
        case 69:
        case 73:
        case 79:
        case 85:
        case 89:
            printf("%c", klawisz_1);
            break;
        case 27: // ESC
            break;
        default:
            printf("_");
            break;
        }

    } while (klawisz_1 != 27);

    printf("\n");

    return (EXIT_SUCCESS);
}