#include <stdio.h>

int add();

int main()
{
    int sum;

    sum = add();

    printf("\nSum of 2 numbers: %d", sum);

    return 0;
}

int add()
{
    int n1, n2, res;

    printf("\nEnter any 2 numbers: ");
    scanf("%d %d", &n1, &n2);

    res = n1 + n2;

    return res;
}
