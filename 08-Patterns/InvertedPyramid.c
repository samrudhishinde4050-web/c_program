#include <stdio.h>

int main()
{
    int i, j, space;

    for (i = 4; i >= 1; i--)
    {
        for (space = 1; space <= 4 - i; space++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
