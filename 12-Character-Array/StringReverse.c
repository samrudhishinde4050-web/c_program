#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    int i;

    printf("Enter a string: ");
    scanf("%s", name);

    printf("Reverse string: ");

    for (i = strlen(name) - 1; i >= 0; i--)
    {
        printf("%c", name[i]);
    }

    return 0;
}
