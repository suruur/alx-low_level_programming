#include <stdio.h>
/**
* main - Entry point
* Return: Always 0
*/
int main() {
    int a = 1, b = 2, c;
    int count = 0;

    /* Print the first two Fibonacci numbers */
    printf("%d, %d, ", a, b); 

    /* We've already printed 2 numbers */
    count = 2; 

    while (count < 98) {
        c = a + b;

        if (count < 97) {
            printf("%d, ", c); /* Print with a comma and space for the first 97 numbers */
        } else {
            printf("%d\n", c); /* Print with a newline for the last number */
        }

        count++;

        a = b;
        b = c;
    }

    return 0;
}
