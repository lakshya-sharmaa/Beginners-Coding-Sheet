#include <stdio.h>

// Inverted Half pyramid

int main (void)
{
    int n;
    printf("Enter the Number: ");
    scanf("%i", &n);

    for (int i=0; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}
