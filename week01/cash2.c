#include <stdio.h>
int main(void) 
{
    int amount = 0;
    printf("Change owed: ");
    scanf("%d", &amount);  // read total amount input    
    //printf("%d\n", amount);

    int coins = 0;
    coins += amount / 25;  // number of quarters
    amount %= 25;         // remaining amount after quarters
    coins += amount / 10;  // number of dimes
    amount %= 10;         // remaining amount after dimes
    coins += amount / 5;   // number of nickels
    amount %= 5;          // remaining amount after nickels
    coins += amount;      // remaining amount is number of pennies
    
    printf("%d\n", coins);

    return 0;
}