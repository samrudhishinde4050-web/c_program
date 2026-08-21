#include <stdio.h>

int main()
{
    int a = 20;
    int b = 10;

    printf("(a > 10 && b < 20) = %d\n", a > 10 && b < 20);
    printf("(a > 30 || b < 20) = %d\n", a > 30 || b < 20);
    printf("!(a > b) = %d\n", !(a > b));

    return 0;
}
