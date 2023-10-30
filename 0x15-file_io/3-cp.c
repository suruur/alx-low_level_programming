#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include "main.h"

/**
 * main - file
 * @argc: name
 * @argv: lett
 * Return: size
 */
int main(int argc, char *argv[])
{
	int fd_ff, fd_ft;
	char buff[1024];
	ssize_t n;
	char *ff, *ft;

	ff = argv[1];
	ft = argv[2];

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	fd_ff = open(ff, O_RDONLY);
	if (fd_ff == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", ff);
		exit(98);
	}
	fd_ft = open(ft, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_ft == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", ft);
		exit(99);
	}
	while ((n = read(fd_ff, buff, sizeof(buff))) > 0)
	{
		if (write(fd_ft, buff, n) != n)
		{
			dprintf(2, "Error: Can't write to file %s\n", ft);
			exit(99);
		}
	}
	if (n == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", ff);
		exit(98);
	}
	if (close(fd_ff) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_ff);
		exit(100);
	}
	if (close(fd_ft) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_ft);
		exit(100);
	}
	exit(0);
}
