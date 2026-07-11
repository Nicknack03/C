#include <stdio.h>
#include <math.h>

int isArmstrong(int number)
{
    int original = number;
    int temp = number;
    int digits = 0;
    int sum = 0;

    // Count digits
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = number;

    // Calculate Armstrong sum
    while (temp != 0)
    {
        int digit = temp % 10;
        sum += (int)pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrong(number))
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}