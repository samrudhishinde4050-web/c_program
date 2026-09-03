#include <stdio.h>

int main()
{
    char name[20];
    int i;

    printf("Enter your name: ");

    for (i = 0; i < 20; i++)
    {
        scanf("%c", &name[i]);

        if (name[i] == '\n')
        {
            name[i] = '\0';
            break;
        }
    }

    printf("Your name is: %s", name);

    return 0;
}
