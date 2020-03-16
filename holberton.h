#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct pointer
{
	char *type;
	void (*f)();
} pt;

int _putchar(char c);
int _strlen(char *s);
void _puts(char *str);
char *_strcpy(char *dest, char *src);

int _printf(const char *format, ...);
char print_char(va_list arg);
char print_string(va_list arg);
#endif
