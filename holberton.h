#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

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
char *  itoa ( int value, char * str, int base );
int _printf(const char *format, ...);
int _putchar(char c);

int print_char(va_list arg, int *bufposptr, char *bufptr);
int print_string(va_list arg, int *bufposptr, char *bufptr);
int print_int(va_list arg, int *bufposptr, char *bufptr);
int print_dec(va_list arg, int *bufposptr, char *bufptr);
int print_prct(va_list arg, int *bufpostptr, char *bufptr);
#endif
