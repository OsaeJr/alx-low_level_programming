#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z' &&( letter != 'q' || letter != 'e'))
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
