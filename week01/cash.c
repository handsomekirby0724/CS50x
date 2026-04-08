#include <stdio.h>
int main(void) 
{
    int amount = 0;
    printf("Change owed: ");
    scanf("%d", &amount);  // read total amount input    
    //printf("%d\n", amount);

    int coins = 0;
    while (amount >= 25)
    {
        amount -= 25;
        coins++;
    }
    while (amount >= 10)
    {
        amount -= 10;
        coins++;
    }
    while (amount >= 5)
    {
        amount -= 5;
        coins++;
    }
    coins += amount;  // remaining amount is number of pennies
    printf("%d\n", coins);

    return 0;
}