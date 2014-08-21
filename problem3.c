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
    long long number = 600851475143, i = 2;
      
    while (number / i != 1)
    {
        while (number % i == 0)
        {
            number = number / i;
        } 
        
        i++;     
    }
  
    printf ("%lld\n", number);
}

// problem_3 ==> 6857
