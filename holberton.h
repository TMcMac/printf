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
void print_char();
void print_string();
#endif
