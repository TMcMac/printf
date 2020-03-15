#include "holberton.h"

/**
 * _printf - a homemade version of the classic printf function
 * a variadic C function to print type specified data and strings.
 * @format: a format specifier
 * Return: 0 for success
 */
int _printf(const char *format, ...)
{

	va_list(args);

	va_start(args, format);

}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen - a function to return the length of a string
 * @s: a char pointer passed from main
 * Return: returns an int for the length of s
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;
	return (len);
}
