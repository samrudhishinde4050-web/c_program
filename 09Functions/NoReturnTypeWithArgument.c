#include <stdio.h>

void add(int x, int y);

int main()
{
    int a, b;

    printf("\nEnter any two numbers: ");
    scanf("%d %d", &a, &b);

    add(a, b);

    return 0;
}

void add(int x, int y)
{
    int res;

    res = x + y;

    printf("\nSum of 2 numbers: %d", res);
}
