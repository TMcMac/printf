#include "holberton.h"


/**
 * print_char - take in a char and return it in a string
 * @arg: passed arg from va_args
 * Return: pointer to our array holding a char
 */

char *print_char(va_list arg)
{
	char a  = va_arg(arg, int);
	char *b = &a;

	return (b);
}

/**
 * print_string - take in a string from va_arg, return it in an array
 * @arg: passed arg from va_args
 * Return: a ptr to be concatonated
 */

char *print_string(va_list arg)
{
	char *a = va_arg(arg, char *);

	return (a);
}

/**
 * print_int - takes in an integer and turns it to a string
 * @arg: passed arg from va_args
 * Return: pointer to string of int as chars
 */

char *print_int(va_list arg)
{
	int a = va_arg(arg, int);
	char *tmp = _print_number(a);

	return (tmp);
}
/**
 * print_prct - takes in an integer
 * @bufpos: buffer position
 * @bufptr: puffer pointer
 * Return: zero
 */

int print_prct(int *bufpos, char *bufptr)
{
	char a = '%';
	*(bufptr + (*bufpos)) = a;
	bufpos++;
	return (0);
}
