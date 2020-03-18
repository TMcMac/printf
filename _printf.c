#include "holberton.h"
#include <stdio.h>

/**
 * _printf - a homemade version of the classic printf function
 * a variadic C function to print type specified data and strings.
 * @format: a format specifier
 * Return: 0 for success
 */
int _printf(const char *format, ...)
{

	va_list arg;
	int inputpos = 0, bufpos = 0, dictinc = 0;
	char buffer[1024] = {0};
	int *bufposptr = &bufpos;
	pt type_dict[] = {
		{'c', print_char}, {'i', print_int}, {'\0', NULL}
	};

	if (format == NULL)
		return (-1);
	va_start(arg, format);
	while (format && format[inputpos])
	{
		if (format[inputpos] == '%')
		{
			inputpos++;
			while (type_dict[dictinc].type != '\0')
			{
				if (format[inputpos] == type_dict[dictinc].type)
				{
					type_dict[dictinc].f(arg, bufposptr, buffer);
				}
				break;
			}

		}
		else
		{
			buffer[bufpos] = format[inputpos];
			inputpos++;
			bufpos++;
		}
	}
	write(1, buffer, bufpos);
	va_end(arg);
	return (0);
}
