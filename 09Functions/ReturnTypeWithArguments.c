#include <stdio.h>

int add(int, int);

int main()
{
    int a, b, sum;

    printf("\nEnter any 2 numbers: ");
    scanf("%d %d", &a, &b);

    sum = add(a, b);

    printf("Sum of 2 numbers: %d", sum);

    return 0;
}

int add(int x, int y)
{
    int res;

    res = x + y;

    return res;
}
