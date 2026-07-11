#include <stdio.h>

int main()
{
    int base, exp, i;
    long long power = 1;

    scanf("%d%d", &base, &exp);

    for (i = 1; i <= exp; i++)
        power *= base;

    printf("%lld", power);

    return 0;
}