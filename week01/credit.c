#include <stdio.h>

int main(void)
{
    printf("Number: ");
    long long n = 0;  // declare a long long variable
    scanf("%lld", &n);  // read long long input
    int sum = 0;
    int digit;

    // STEP 1: digits multiplied by 2
    long long temp = n / 10;

    while (temp > 0)
    {
        digit = temp % 10;
        digit *= 2;

        if (digit > 9)
        {
            digit = (digit % 10) + (digit / 10);
        }

        sum += digit;
        temp /= 100;
    }

    // STEP 2: digits NOT multiplied
    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;
        sum += digit;
        temp /= 100;
    }

    // STEP 3: check validity
    if (sum % 10 == 0)
    {
        printf("Valid\n");
    }
    else
    {
        printf("Invalid\n");
    }

    return 0;
}