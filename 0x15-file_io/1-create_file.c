#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
 * create_file - file
 * @filename: name
 * @text_content: lett
 * Return: size
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t tl, bw;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (0);
	}

	if (text_content != NULL)
	{
		tl = strlen(text_content);
		bw = write(fd, text_content, tl);
		close(fd);
		if (bw == -1 || bw != tl)
		{
			return (-1);
		}
	}
	else
	{
		close(fd);
	}

	return (1);
}
