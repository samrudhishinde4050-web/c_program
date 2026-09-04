#include <stdio.h>
#include <string.h>

int main()
{
    char name1[50];
    char name2[50];

    printf("Enter first string: ");
    scanf("%s", name1);

    printf("Enter second string: ");
    scanf("%s", name2);

    if (strcmp(name1, name2) == 0)
    {
        printf("Both strings are same");
    }
    else
    {
        printf("Strings are different");
    }

    return 0;
}
