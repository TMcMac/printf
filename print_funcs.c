#include "holberton.h"
#include <stdio.h>
#include "stdlib.h"
#include <string.h>
/**
 * print_char - add two ints
 * @a: char to be added to buffer
 * Return: char to be added to buffer
 */

int print_char(void *data, int *bufpos, char *bufptr)
{
        char a = *(char *)data;
        *(bufptr + (*bufpos)) = a;
        bufpos++;
        return (0);
}

/**
 * print_string - subtract two ints
 * @arg: string to be parsed
 * Return: product
 */

int print_string(void *data, int *bufpos, char *bufptr)
{
	char a =*(char *)data;
	*(bufptr + (*bufpos)) = a;
	bufpos++;
	return (0);
}

/**
 * print_int - takes in an integer
 * Returns the int as a char
 */

int print_int(void *data, int *bufpos, char *bufptr)
{

        int a = *(int *)data;
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
