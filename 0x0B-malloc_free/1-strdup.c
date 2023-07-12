#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * @str: a char pointer
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *duplicate;
	const char *temp;
	unsigned int length;
	char *temp_dup;


	if (str == NULL)
	{
		return NULL;
	}

    
	length = 0;
	temp = str;
	while (*temp != '\0')
	{
        length++;
        temp++;
	}

    
	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return NULL;
	}


	temp_dup = duplicate;
	while (*str != '\0')
	{
		*temp_dup = *str;
		temp_dup++;
		str++;
	}
	*temp_dup = '\0';

	return duplicate;
}
