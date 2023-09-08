#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t br, bw, fd;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	br = read(fd, buf, letters);
	if (br == -1 || buf == NULL)
		return (0);
	bw = write(STDOUT_FILENO, buf, br);
	if (bw == -1 || bw != br)
		return (0);
	free(buf);
	close(fd);
	return (bw);	
}
