#include <stdio.h>

// Hollow Rectangular star

int main (void)
{
    int n, r;

    printf ("Enter The No. of Rows: ");
    scanf ("%i", &r);

    printf ("Enter The No. of star: ");
    scanf ("%i", &n);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ( i==0 || i==r-1 || j==0 || j==n-1)
            {
                printf ("* ");
            }
            else
            {
                printf (" ");
            }
        }
        printf ("\n");
    }
}