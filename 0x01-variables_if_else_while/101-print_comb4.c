#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	putchar ('0');
	putchar ('1');
	putchar ('2');
	putchar (',');
	putchar (' ');

	for (i = 0; i <= 3; i++)
		for (j = 0; j <= 3; j++)
			for (k = 0; k < 3; k++)
				if (i != j && j != k && i != k)
				{
					putchar ('0' +i);
					putchar ('0' +j);
					putchar ('0' +k);

					if (i != 2 || j != 1 || k != 0)
					{
						putchar (',');
						putchar (' ');
					}
				}

	/* print a new line at the end */
	putchar ('\n');
	return (0);
}
