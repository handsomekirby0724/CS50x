#include <stdio.h>

int main(void)
{
    char name[50];  // this IS a string in C

    printf("What is your name? ");
    scanf("%s", name);

    printf("Hello %s\n", name);

    return 0;
}