/*
 * File: 100-elf_header.c
 * Auth: Brennan D Baraban
 */

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void validateElfFile(unsigned char *elfMagic);
void printElfMagic(unsigned char *elfMagic);
void printElfClass(unsigned char *elfMagic);
void printElfData(unsigned char *elfMagic);
void printElfVersion(unsigned char *elfMagic);
void printElfOSABI(unsigned char *elfMagic);
void printElfABI(unsigned char *elfMagic);
void printElfType(unsigned int elfType, unsigned char *elfMagic);
void printElfEntry(unsigned long int entryPoint, unsigned char *elfMagic);
void closeElfFile(int fileDescriptor);

/**
 * validateElfFile - Checks if a file is an ELF file.
 * @elfMagic: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void validateElfFile(unsigned char *elfMagic)
{
    int index;

    for (index = 0; index < 4; index++)
    {
        if (elfMagic[index] != 127 &&
            elfMagic[index] != 'E' &&
            elfMagic[index] != 'L' &&
            elfMagic[index] != 'F')
        {
            dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
            exit(98);
        }
    }
}

/**
 * printElfMagic - Prints the magic numbers of an ELF header.
 * @elfMagic: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void printElfMagic(unsigned char *elfMagic)
{
    int index;

    printf("  Magic:   ");

    for (index = 0; index < EI_NIDENT; index++)
    {
        printf("%02x", elfMagic[index]);

        if (index == EI_NIDENT - 1)
            printf("\n");
        else
            printf(" ");
    }
}

/**
 * printElfClass - Prints the class of an ELF header.
 * @elfMagic: A pointer to an array containing the ELF class.
 */
void printElfClass(unsigned char *elfMagic)
{
    printf("  Class:                             ");

    switch (elfMagic[EI_CLASS])
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
        printf("<unknown: %x>\n", elfMagic[EI_CLASS]);
    }
}

/**
 * printElfData - Prints the data of an ELF header.
 * @elfMagic: A pointer to an array containing the ELF class.
 */
void printElfData(unsigned char *elfMagic)
{
    printf("  Data:                              ");

    switch (elfMagic[EI_DATA])
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
        printf("<unknown: %x>\n", elfMagic[EI_CLASS]);
    }
}

/**
 * printElfVersion - Prints the version of an ELF header.
 * @elfMagic: A pointer to an array containing the ELF version.
 */
void printElfVersion(unsigned char *elfMagic)
{
    printf("  Version:                           %d",
           elfMagic[EI_VERSION]);

    switch (elfMagic[EI_VERSION])
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
 * printElfOSABI - Prints the OS/ABI of an ELF header.
 * @elfMagic: A pointer to an array containing the ELF version.
 */
void printElfOSABI(unsigned char *elfMagic)
{
    printf("  OS/ABI:                            ");

    switch (elfMagic[EI_OSABI])
    {
    case ELFOSABI_NONE:
        printf("UNIX - System V\n");
        break;
    case ELFOSABI_HPUX:
        printf("UNIX - HP-UX\n");
        break;
    case ELFOSABI_NETBSD:
        printf("

