#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - file
 * @filename: name
 * @letters: lett
 * Return: size
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t br, bw;
	char *buffer;

	buffer = malloc(letters);

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	br = read(fd, buffer, letters);
	if (br == -1)
	{
		close(fd);
		return (0);
	}
	bw = write(STDOUT_FILENO, buffer, br);
	close(fd);
	if (bw == -1 || bw != br)
	{
		return (0);
	}
	return (bw);
}
