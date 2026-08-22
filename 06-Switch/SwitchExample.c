#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number (1-3): ");
    scanf("%d", &number);

    switch (number)
    {
        case 1:
            printf("One");
            break;

        case 2:
            printf("Two");
            break;

        case 3:
            printf("Three");
            break;

        default:
            printf("Invalid number");
    }

    return 0;
}
