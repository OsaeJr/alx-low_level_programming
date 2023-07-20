#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format:  list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	char ch;
	int num;
	float fnum;
	char *str;
	const char *ptr = format;
	va_list args;

	va_start(args, format);
	while (*ptr)
	{
	if (*ptr == 'c')
	{
		ch = (char)va_arg(args, int);
		printf("%c", ch);
	}
	else if (*ptr == 'i')
	{
		num = va_arg(args, int);
		printf("%d", num);
	}
	else if (*ptr == 'f')
	{
		fnum = (float)va_arg(args, double);
		printf("%f", fnum);
	}
	else if (*ptr == 's')
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
	}
	ptr++;
	if (*ptr && (*ptr == 'c' || *ptr == 'i' || *ptr == 'f' || *ptr == 's'))
		printf(", ");
	}
	va_end(args);
	printf("\n");
}
