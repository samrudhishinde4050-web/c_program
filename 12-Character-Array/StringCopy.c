#include <stdio.h>
#include <string.h>

int main()
{
    char name1[50];
    char name2[50];

    printf("Enter your name: ");
    scanf("%s", name1);

    strcpy(name2, name1);

    printf("Original string: %s\n", name1);
    printf("Copied string: %s", name2);

    return 0;
}
