#include "holberton.h"

/**
 * _printf - a homemade version of the classic printf function
 * a variadic C function to print type specified data and strings.
 * @format: a format specifier
 * Return: 0 for success
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0, j = 0;
	buffer[1024] = {0};

	tp type_dict[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			while (type_dict[j].type != NULL)
			{
				if(format[i] == type_dict[j].type[0])
				{
					type_dict[j].f(arg);
				}
				j++;
			}
		}
		else
		{
			buffer[j] = format[i];
			j++;
		}
		i++;
	}
	write (1, buff, j)
	va_end(args);
	return (j);
}
