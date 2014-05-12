/**
 * problem1.c
 * 
 * Aksana Kuzmitskaya
 * aksana.kuzmitskaya@gmail.com
 *
 * Add all the natural numbers below 1000 that are multiples of 3 or 5.
 */
 
#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int x;
    int y = 0;
    for (x = 1; x < 1000; x++)
    {
        if (x % 3 == 0 || x % 5 == 0)
        {
            y +=x;
        } 
    }
    printf ("%d\n", y);
}
