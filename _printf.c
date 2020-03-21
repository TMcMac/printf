#include "holberton.h"
/**
 * _printf - Funtion to print %formated text
 * @format: Formatted string to be parsed and formated
 * Return: Number of characters printed
 **/
int _printf(const char *format, ...)
{
	const char *str = format;
	va_list ap;
	int i = 0;
	int tmp = 0;
	int count = 0;

	va_start(ap, format);

	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '%')
				_putchar('%');
			else
			{
				tmp = formattype(str[i], ap);
				count += tmp;
			}
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
		i++;
	}
	va_end(ap);
	return (count);
}
/**
 * formattype - match the char passed from _printf to type_dict and
 * then send the arg to the proper function and get back a string.
 * @a: a char from _printf for matching
 * @ap: are argument list var
 * Return: we should get a string back from our print fuctions
 * and we return a pointer to that string so our else while loop in
 * _printf can append it to the buffer.
 */
int formattype(char a, va_list ap)
{
	int i = 0;
	int tmp = 0;
	pt type_dict[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_int},
		{'d', print_int},
		{'\0', NULL}
		};
	while (type_dict[i].type)
	{
		if (a == type_dict[i].type)
		{
			tmp = type_dict[i].f(ap);
			return (tmp);
		}
		i++;
	}
	_putchar('%');
	_putchar(a);
	tmp = 2;
	return (tmp);
}
