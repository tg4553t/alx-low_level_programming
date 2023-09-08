#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create a file
 * @filename is NULL return -1
 * @text_content is not  NULL write content to the file
 * Return: 1 on success
 * Return: -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, length, w_text;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length] != '\0'; length++)
			return (1);
		w_text = write(fd, text_content, length);
		if (w_text == -1)
			return (-1);
	}
	else 
		return (1);
	close(fd);
	return (1);
}
