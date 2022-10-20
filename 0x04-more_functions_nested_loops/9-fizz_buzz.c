#include <stdio.h>

/**
 * main - implement the Fizz Buzz program
 *
 * Description: print Fizz for multiples of 3 and Buzz for multiples
 * of 5, and FizzBuzz for multiples of both
 * Return: 0 (success)
 */

int main(void)
{
	       int i;

        for (i = 0; i <= 100; i++)
        {
                if ((i % 3) && (i % 5) == 0)
                {
                   printf("FizzBuzz ");
                }
                else if ((i % 3) == 0)
                {
                 printf("Fizz ");
                }
                else if ((i % 5) == 0)
                {
                    printf("Buzz ");
                }
                else
                        printf("%d ", i);

        }
        printf("\n");
    return 0;
}
