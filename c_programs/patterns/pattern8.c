#include <stdio.h>

// Half pyramid using numbers

int main(void)
{
    int n;
    printf("Enter The Number: ");
    scanf("%i", &n);

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("%i", j);
        }
        printf("\n");
    }
}