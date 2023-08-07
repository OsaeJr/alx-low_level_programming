#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <stdlib.h>
#include <string.h>

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
 * print_elf_info - Prints information from the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_info(Elf64_Ehdr *header)
{
	int i;

    printf("Magic:  ");
    for (i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");

    printf("Class:  ");
    switch (header->e_ident[EI_CLASS])
    {
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }

    printf("Data:  ");
    switch (header->e_ident[EI_DATA])
    {
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }

    printf("Version:  %d\n", header->e_ident[EI_VERSION]);

    printf("OS/ABI:  ");
    switch (header->e_ident[EI_OSABI])
    {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("HP-UX\n");
            break;
        case ELFOSABI_NETBSD:
            printf("NetBSD\n");
            break;
        case ELFOSABI_LINUX:
            printf("Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("Solaris\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("FreeBSD\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }

    printf("ABI Version:  %d\n", header->e_ident[EI_ABIVERSION]);

    printf("Type:  ");
    switch (header->e_type)
    {
        case ET_NONE:
            printf("NONE (No file type)\n");
            break;
        case ET_REL:
            printf("REL (Relocatable file)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        case ET_CORE:
            printf("CORE (Core file)\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }

    printf("Entry point address:  0x%lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
    int fd;
    ssize_t bytes_read;
    Elf64_Ehdr header;

    if (argc != 2)
    {
        print_error("Usage: elf_header elf_filename");
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        print_error("Failed to open the file");
    }

    bytes_read = read(fd, &header, sizeof(header));
    if (bytes_read != sizeof(header))
    {
        close(fd);
        print_error("Failed to read ELF header");
    }

    if (header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3)
    {
        close(fd);
        print_error("File is not an ELF file");
    }

    print_elf_info(&header);

    close(fd);
    return 0;
}

