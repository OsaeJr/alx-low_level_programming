#include<stdio.h>
/**
 * main - Entry Point
 * Return; Always 0
 */
int main(void)
{
	char letter = 'a';

	char upper_letter = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (upper_letter <= 'Z')
	{
		putchar(upper_letter);
		upper_letter++;
	}
	putchar('\n');
	return (0);
}
