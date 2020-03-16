#include "holberton.h"

/**
 * _puts  - a function to print a string
 *
 * @str: a string passed from main
 *
 * Return: No return
 */


void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
