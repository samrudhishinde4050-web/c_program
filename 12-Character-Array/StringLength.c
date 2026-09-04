#include <stdio.h>

int main()
{
    char name[50];
    int i, length = 0;

    printf("Enter your name: ");
    scanf("%s", name);

    for (i = 0; name[i] != '\0'; i++)
    {
        length++;
    }

    printf("Length of string = %d", length);

    return 0;
}
