#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @file_name: The name of the file to read.
 * @num_letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *file_name, size_t num_letters)
{
	int file_descriptor;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (file_name == NULL)
		return (0);

	file_descriptor = open(file_name, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(num_letters);
	if (buffer == NULL)
		{
		close(file_descriptor);
			return (0);
		}

		bytes_read = read(file_descriptor, buffer, num_letters);
		close(file_descriptor);

	if (bytes_read == -1)
	{
		free(buffer);
		return (0);
	}

		bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
		free(buffer);

	return (bytes_read != bytes_written) ? 0 : bytes_written;
}
