#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_error - Prints error message to stderr and exits with status code 98.
 * @error_msg: The error message to print.
 */
void print_error(const char *error_msg)
{
    fprintf(stderr, "Error: %s\n", error_msg);
    exit(98);
}

/**
 * main - Copies the content of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to;
    char buffer[1024];
    ssize_t bytes_read, bytes_written;

    if (argc != 3)
    {
        print_error("Usage: cp file_from file_to");
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
    {
        print_error("Error opening source file");
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        close(fd_from);
        print_error("Error opening destination file");
    }

    while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
    {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1 || bytes_written != bytes_read)
        {
            close(fd_from);
            close(fd_to);
            print_error("Error writing to destination file");
        }
    }

    if (bytes_read == -1)
    {
        close(fd_from);
        close(fd_to);
        print_error("Error reading from source file");
    }

    if (close(fd_from) == -1)
    {
        print_error("Error closing source file");
    }

    if (close(fd_to) == -1)
    {
        print_error("Error closing destination file");
    }

    return 0;
}

