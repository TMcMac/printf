#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

/**
 * struct pointer - will be a struct of chars to match %' ' for
 * print f and function pointers
 * @type: the chars for printf formats is c,s,i,d,x,p
 * @f: the function pointers for proper formatting
 */
typedef struct pointer
{
	char type;
	char * (*f)(va_list ap);
} pt;

int _printf(const char *format, ...);
int _strlen(char *s);
int _strncat(char *dest, char *src);
char *print_int(va_list);
char *print_char(va_list);
char *print_string(va_list);
char *_print_number(int n);

#endif
