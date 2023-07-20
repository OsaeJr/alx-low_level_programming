#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format:  list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	char *str;
	const char *ptr = format;
	va_list args;

	va_start(args, format);
	while (*ptr)
	{
		switch (*ptr)
	{
		case 'c':
			printf("%c", va_arg(args, int));
			break;

		case 'i':
			printf("%d", va_arg(args, int));
			break;

		case 'f':
			printf("%f", va_arg(args, double));
			break;

		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			break;
	}
	ptr++;
	if (*ptr && (*ptr == 'c' || *ptr == 'i' || *ptr == 'f' || *ptr == 's'))
		printf(", ");
	}
	va_end(args);
	printf("\n");
}
