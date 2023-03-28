#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    const int max_number = 101;
    int tries_counter = 1, generated_number, picked_number;

    srand(time(NULL));
    generated_number = rand() % max_number;

    printf("Podaj liczbe z zakresu 0-100: ");
    scanf("%d", &picked_number);

    while (picked_number != generated_number)
    {
        tries_counter++;

        if(picked_number < generated_number)
        {
            printf("Za malo!\n");
        }
        else
        {
            printf("Za duzo!\n");
        }

        printf("Podaj nowa liczbe: ");
        scanf("%d", &picked_number);
    }

    printf("Brawo - trafiles w %d probach!\n", tries_counter);

    getchar();
    return (EXIT_SUCCESS);
}