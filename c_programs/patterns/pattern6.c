#include <stdio.h>

// Inverted Full Pyramid Star Pattern

int main(void)
{
    int n;
    printf("Enter The Number: ");
    scanf("%i", &n);

    for (int i=1; i<=n; i++)
    {
        for (int j=n; j>=n-i; j--)
        {
            printf(" ");
        }
        for (int k=n; k>=i ; k--)
        {
            printf("* ");
        }
        printf("\n");
    }
}