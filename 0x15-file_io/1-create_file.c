#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - Creates a file with specified permissions and writes content to it.
 * @filename: The name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	size_t content_length = 0;
	int file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	ssize_t bytes_written = write(file_descriptor, text_content, content_length);

	if (filename == NULL)
		return (-1);

	if (file_descriptor == -1)
		return -1;

	if (text_content != NULL)
	{
		size_t content_length = 0;
		while (text_content[content_length] != '\0')
	{
		content_length++;
	}

        if (bytes_written == -1)
	{
		close(file_descriptor);
		return (-1);
	}
	}

		close(file_descriptor);
		return (1);}
