#include "main.h"

/**
 * create_file - Creates a file with specified pmissn and writes content to it.
 * @file_name: The name of the file to create.
 * @content: A NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *file_name, char *content)
{
	int file_descriptor;
	int num_letters;
	int result;

	if (!file_name)
		return (-1);

	file_descriptor = open(file_name, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1);

	if (!content)
		content = "";

	for (num_letters = 0; content[num_letters]; num_letters++)
		result = write(file_descriptor, content, num_letters);

	if (result == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}

