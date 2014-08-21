/**
 * problem2.c
 * 
 * Aksana Kuzmitskaya
 * aksana.kuzmitskaya@gmail.com
 *
 * For terms in the Fibonacci sequence, whose values do not exceed four million, find the sum of the even-valued terms.
 */

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int i, first = 0, second = 1, next, count = 0;
    
    for (i = 0; next < 4000000; i++)
    {
        next = first + second;
        first = second;
        second = next;
        
        if (second % 2 == 0) 
        {
            count += next; 
        }
    }
    
    printf ("%d\n", count);
}

// problem_2 ==> 4613732
