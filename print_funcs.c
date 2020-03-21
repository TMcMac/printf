#include "holberton.h"

/**
 * print_char - Prints a char as passed from va_list
 * @ap: the list
 * Return: always returns 1
 */
int print_char(va_list ap)
{
	char a = va_arg(ap, int);

	_putchar(a);
	return (1);
}

/**
 * print_string - Prints a char as passed from va_list
 * @ap: the list
 * Return: the length of the string
 */
int print_string(va_list ap)
{
	int i = 0;
	char *a = va_arg(ap, int);

	if (a == NULL)
		a = "(null)";

	while (a[i] != '\0')
	{
		_putchar(a[i]);
		i++;
	}
	return (i);
}
