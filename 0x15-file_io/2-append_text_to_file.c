#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, length, w_txt;
	if (filename == NULL)
		return (-1);
	file_d = open(filename,O_WRONLY | O_APPEND);
	if (file_d == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length] != '\0'; length++)
		{
			w_txt = write(file_d, text_content, length);
			if (w_txt == -1)
				return (-1);
		}
	}
	close(file_d);
	return (-1);
}
