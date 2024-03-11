#include <stdio.h>

// Pascal Triangle

int main(void)
{
    int n;
    printf("Enter the Number: ");
    scanf("%i", &n);

    for (int i=0; i<=n; i++)
    {
        int coefficient = 1;
        for (int j=0; j<=n-i-1; j++)
        {
            printf(" ");
        }
        for (int k=0; k<=i; k++)
        {
            printf("%i   ", coefficient);
            coefficient = coefficient * (i - k) / (k + 1);
        }
        printf("\n");
    }
}