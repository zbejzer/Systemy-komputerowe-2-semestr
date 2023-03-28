#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int pos_x, pos_y;

    printf("Podaj x: ");
    scanf("%d", &pos_x);
    printf("Podaj y: ");
    scanf("%d", &pos_y);

    if (pos_x == 0 && pos_y == 0)
    {
        printf("Punkt znajduje sie w srodku ukladu wspolrzednych.\n");
    }
    else if (pos_x == 0)
    {
        printf("Punkt lezy na osi OY.\n");
    }
    else if (pos_y == 0)
    {
        printf("Punkt lezy na osi OX.\n");
    }
    else if (pos_y > 0)
    {
        if (pos_x > 0)
        {
            printf("Punkt znajduje sie w I cwiartce.\n");
        }
        else
        {
            printf("Punkt znajduje sie w II cwiartce.\n");
        }
    }
    else
    {
        if (pos_x < 0)
        {
            printf("Punkt znajduje sie w III cwiartce.\n");
        }
        else
        {
            printf("Punkt znajduje sie w IV cwiartce.\n");
        }
    }

    getchar();
    return (EXIT_SUCCESS);
}