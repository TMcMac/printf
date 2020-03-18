#include "holberton.h"
#include <stdio.h>
#include "stdlib.h"
#include <string.h>
/**
 * print_char - add two ints
 * @arg: passed arg from va_args
 * @bufpos: buffer position
 * @bufptr: puffer pointer
 * Return: zero
 */

int print_char(va_list arg, int *bufpos, char *bufptr)
{
	char a = va_arg(arg, int);
	*(bufptr + (*bufpos)) = a;
	bufpos++;
	return (0);
}

/**
 * print_string - subtract two ints
 * @arg: passed arg from va_args
 * @bufpos: buffer position
 * @bufptr: puffer pointer
 * Return: zero
 */

int print_string(va_list arg, int *bufpos, char *bufptr)
{
	char a = va_arg(arg, int);
	*(bufptr + (*bufpos)) = a;
	bufpos++;
	return (0);
}

/**
 * print_int - takes in an integer
 * @arg: passed arg from va_args
 * @bufpos: buffer position
 * @bufptr: puffer pointer
 * Return: zero
 */

int print_int(va_list arg, int *bufpos, char *bufptr)
{
	int a = va_arg(arg, int);
	int i = 0;
	char *tmp = _print_number(a);

	while (tmp[i] != '\0')
	{
		*(bufptr + (*bufpos)) = tmp[i];
		bufpos++;
		i++;
	}

	return (0);
}
