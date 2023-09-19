#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 success
 */

void main(void)
{
	srand(time(NULL));

	int length = 10;
	printf(" Generated Password: ");
        genPasswd(length);	
}
char genRandChar()
{
	char charset[] = "ABCDEFGHIJKLMNOPQRSTVWXYZabcdefghijklmnopqrstvwxyz0123456789!@#$%^&*()_+";
	int charsetlen = sizeof(charset) - 1;
	char c = charset[rand() % charsetlen];
}

void genPasswd(int len)
{
	int i;

	for (i = 0; i < len; i++)
		printf("%c", genRandChar());
	printf("\n");
}
