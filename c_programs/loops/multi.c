#include <stdio.h>

// Write a Program to Generate Multiplication Table of a
// number (entered by the user) using a for loop

int main(void)
{
    int a, multi;
    printf("Enter the Number: ");
    scanf("%i", &a);

    for(int i = 0; i <= 10; i++)
    {
        multi = a * i;
        printf ("%i * %i = %i\n", a, i, multi);
    }
}