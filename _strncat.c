#include "holberton.h"

/**
 * _strncat - a function to concatonate two strings
 * @dest: the destination string receiving the append
 * @src: the source string to be appended to dest
 * Return: a length count for the second string
 */

int _strncat(char *dest, char *src)
{
	int counter = 0;
	int start = _strlen(dest);
	int test = _strlen(src);
		
	while (test > 0)
	{
		dest[start] = src[counter];
		start++;
		counter++;
		test--;
	}

	return (counter);
}

/**
 * _strlen - a function to return the length of a string
 *
 * @s: a char pointer passed from main
 *
 * Return: returns an int
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;

	return (len);
}
