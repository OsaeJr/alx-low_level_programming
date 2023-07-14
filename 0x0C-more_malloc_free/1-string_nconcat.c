#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: char pointer
 * @s2: char pointer
 * @n: int var
 * Return: return pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1;
	unsigned int length2;
	unsigned int i;
	char *concatenated;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)

	length1 = 0;
	while (s1[length1] != '\0')
		length1++;

	length2 = 0;
	while (s2[length2] != '\0')
		length2++;

	if (n >= length2)
		n = length2;

	concatenated = (char *)malloc((length1 + n + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		concatenated[i] = s1[i];


	for (i = 0; i < n; i++)
		concatenated[length1 + i] = s2[i];

	concatenated[length1 + n] = '\0';

	return (concatenated);
}
