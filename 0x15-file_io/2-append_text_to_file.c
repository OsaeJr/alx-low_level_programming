#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @file_name: A pointer to the name of the file.
 * @content: The string to add to the end of the file.
 *
 * Return: If the function fails or file_name is NULL - -1.
 *         If the file does not exist or the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *file_name, char *content)
{
	int file_descriptor, bytes_written, length = 0;

	if (file_name == NULL)
		return (-1);

	if (content != NULL)
	{
		for (length = 0; content[length];)
			length++;
	}

	file_descriptor = open(file_name, O_WRONLY | O_APPEND);
	bytes_written = write(file_descriptor, content, length);

	if (file_descriptor == -1 || bytes_written == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
