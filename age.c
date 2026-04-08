#include <stdio.h>

int main(void)
{
    int age;  // declare an integer variable

    printf("Enter your age: ");
    scanf("%d", &age);  // read integer input

    printf("You are %d years old\n", age);

    return 0;
}