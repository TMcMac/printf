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
	int (*f)(va_list, int *, char *);
} pt;

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _printf(const char *format, ...);
int _putchar(char c);
char *_print_number(int n);
int print_char(void * data, int *bufposptr, char *bufptr);
int print_string(void *data, int *bufposptr, char *bufptr);
int print_int(void * data, int *bufposptr, char *bufptr);
int print_dec(void * data, int *bufposptr, char *bufptr);
/*int print_prct(int *bufpostptr, char *bufptr);*/
#endif
