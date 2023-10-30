#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - file
 * @filename: name
 * @text_content: lett
 * Return: size
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	file = fopen(filename, "a");
	if (file == NULL)
	{
		return (-1);
	}

	if (fputs(text_content, file) == EOF)
	{
		fclose(file);
		return (-1);
	}

	fclose(file);
	return (1);
}
