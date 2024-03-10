#include <stdio.h>

// Write a Program to Find Factorial of a given number N
// (N is entered by user)

int main (void)
{
    int a, fact = 1;
    do
    {
        printf("Enter The Number: ");
        scanf("%i", &a);
        if (a <= 0)
        {
            printf("Please Enter Valid Number\n");
        }
    }while(a <= 0);

    for ( int i = 1; i <= a; i++ )
    {
        fact *= i ;
    }
    printf("Factorial Number: %i \n", fact);
}