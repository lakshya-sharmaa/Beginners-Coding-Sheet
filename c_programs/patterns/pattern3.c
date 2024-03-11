#include <stdio.h>

// Half Pyramid Star Pattern

int main(void)
{
    int n;
    printf ("Enter The Number: ");
    scanf ("%i", &n);

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf ("* ");
        }
        printf("\n");
    } 
}