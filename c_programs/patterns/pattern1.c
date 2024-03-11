#include <stdio.h>

// Solid Rectangular star

int main (void)
{
    int n, r;
    
    printf ("Enter the number of Rows: ");
    scanf ("%i", &r);

    printf ("Enter the Number of star: ");
    scanf ("%i", &n);

    for (int i = 1; i <= r; i++ )
    {
        for (int j = 1; j <= n; j++)
        {
            printf ("* ");
        }
        printf ("\n");
    }
}