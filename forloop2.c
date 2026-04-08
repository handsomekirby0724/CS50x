#include <stdio.h>

int main(void)
{   int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);  // read integer input
    for (int i = 1; i <= rows; i++)   // controls rows
    {
           // print spaces
        for (int j = 0; j < rows - i; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < i; k++) // prints more each row
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}