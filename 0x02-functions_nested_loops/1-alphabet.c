#include "main.h"
/**
 * main - Entry point
 * Return: Always 0
 * print_alphabet - Prints alphabets
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while(alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++
	}
}

int main()
{
	print_alphabet();
	putchar('\n');
	return (0);
}
