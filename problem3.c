/**
 * problem1.c
 * 
 * Aksana Kuzmitskaya
 * aksana.kuzmitskaya@gmail.com
 *
 * Finds the largest prime factor of the number 600851475143 
 */
 
#include <stdio.h>

int main(void)
{   
    long long number = 600851475143, i = 2, numberc = number;
      
    while (numberc/i != 1)
    {
        while (numberc % i == 0)
        {
            numberc = numberc/i;
        } 
        
        i++;     
    }
  
    printf ("%lld\n", numberc);
}

// problem_3 ==> 6857
