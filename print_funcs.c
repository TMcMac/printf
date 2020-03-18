#include "holberton.h"
#include <stdio.h>
#include "stdlib.h"
#include <string.h>
/**
 * print_char - add two ints
 * @a: char to be added to buffer
 * Return: char to be added to buffer
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
 * @arg: string to be parsed
 * Return: product
 */

int print_string(va_list arg, int *bufpos, char *bufptr)
{
	char a =va_arg(arg, int);
	*(bufptr + (*bufpos)) = a;
	bufpos++;
	return (0);
}

/**
 * print_int - takes in an integer
 * Returns the int as a char
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
/*
int print_prct(int *bufpos, char *bufptr)
{
        char a = '%';
        *(bufptr + *bufpos) = a;
        bufpos++;

        return (0);
}
*/
