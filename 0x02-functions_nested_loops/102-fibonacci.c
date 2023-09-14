#include <stdio.h>

/**
* main - Entry point
* Return: Always 0
*/

int main(void)
{
    int a = 1, b = 2, c;
    int count = 0;

    printf("%d, %d, ", a, b); /* Print the first two Fibonacci numbers */

    count = 2; /* We've already printed 2 numbers*/

    while (count < 50)
      {
        c = a + b;

        if (count < 49)
        {
            printf("%d, ", c); /* Print with a comma and space for the first 49 numbers */
        }
        else
        {
            printf("%d\n", c); /* Print with a newline for the last number */
        }

        count++;

        a = b;
        b = c;
    }

    return (0);
}
