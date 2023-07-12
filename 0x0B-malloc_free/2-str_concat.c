#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  concatenates two strings.
 * @s1: char pointer
 * @s2: char pointer
 * Return: return NULL on failure
 */


char *str_concat(char *s1, char *s2)
{
	unsigned int length1;
	char *temp1;
	unsigned int length2;
	char *temp2;
	char *concatenated;
	char *temp_concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	length1 = 0;
	temp1 = s1;
	while (*temp1 != '\0')
	{
		length1++;
		temp1++;
	}

	length2 = 0;
	temp2 = s2;
	while (*temp2 != '\0')
	{
	length2++;
	temp2++;
	}

	concatenated = (char *)malloc((length1 + length2 + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);
	
	temp_concat = concatenated;

	while (*s1 != '\0')
	{
		*temp_concat = *s1;
		temp_concat++;
		s1++;
	}

	while (*s2 != '\0')
	{
		*temp_concat = *s2;
		temp_concat++;
		s2++;
	}
	*temp_concat = '\0';

	return (concatenated);
}

