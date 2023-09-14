#include <stdio.h>

/**
* main - Entry point 
* Return: Always 0
*/
int main(void)
{
    int term1 = 1;
    int term2 = 2;
    int nextTerm;
    int sum = 2; /* Initialize the sum with the second term (2) */
    
    while (1)
    {
        nextTerm = term1 + term2;
        if (nextTerm > 4000000)
            {
                break; /* Exit the loop if the next term exceeds 4,000,000 */
            }
        if (nextTerm % 2 == 0)
            {
                sum += nextTerm; /* Add even-valued terms to the sum */
            }
        term1 = term2;
        term2 = nextTerm;
    }
    printf("%d\n", sum);
    return (0);
}
