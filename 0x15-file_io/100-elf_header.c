#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void validate_elf_magic(unsigned char *ident);
void print_magic_numbers(unsigned char *ident);
void print_file_class(unsigned char *ident);
void print_data_encoding(unsigned char *ident);
void print_version_info(unsigned char *ident);
void print_os_abi(unsigned char *ident);
void print_abi_version(unsigned char *ident);
void print_file_type(unsigned int type, unsigned char *ident);
void print_entry_point(unsigned long int entry, unsigned char *ident);
void close_elf_file(int fd);

/**
 * validate_elf_magic - Validates if the file is an ELF file.
 * @ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Exits with code 98 if the file is not an ELF file.
 */
void validate_elf_magic(unsigned char *ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (ident[i] != 127 &&
		    ident[i] != 'E' &&
		    ident[i] != 'L' &&
		    ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic_numbers - Prints the magic numbers of an ELF header.
 * @ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void print_magic_numbers(unsigned char *ident)
{
	int i;

	printf(" Magic: ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_file_class - Prints the class of an ELF header.
 * @ident: A pointer to an array containing the ELF class.
 */
void print_file_class(unsigned char *ident)
{
	printf(" Class: ");

	switch (ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", ident[EI_CLASS]);
	}
}

/**
 * print_data_encoding - Prints the data encoding of an ELF header.
 * @ident: A pointer to an array containing the ELF data encoding.
 */
void print_data_encoding(unsigned char *ident)
{
	printf(" Data: ");

	switch (ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", ident[EI_DATA]);
	}
}

/**
 * print_version_info - Prints the version information of an ELF header.
 * @ident: A pointer to an array containing the ELF version information.
 */
void print_version_info(unsigned char *ident)
{
	printf(" Version: %d", ident[EI_VERSION]);

	switch (ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_os_abi - Prints the OS/ABI of an ELF header.
 * @ident: A pointer to an array containing the ELF OS/ABI.
 */
void print_os_abi(unsigned char *ident)
{
	printf(" OS/ABI: ");

	switch (ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", ident[EI_OSABI]);
	}
}

/**
 * print_abi_version - Prints the ABI

