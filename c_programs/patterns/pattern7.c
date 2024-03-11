#include <stdio.h>

// Hollow Full Pyramid Star

int main (void)
{
    int n;
    printf("Enter the Number: ");
    scanf("%i", &n);

    for (int i=1; i <= n; i++)
    {
        for (int j=1; j <= n-i; j++)
        {
            printf(" ");
        }
        for (int k=1; k <= 2*i-1; k++)
        {
            if (k==1 || k == 2*i-1 || i==n)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}