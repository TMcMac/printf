#include "holberton.h"

/**
 * _strcpy - a function to copy a string from one
 * memory location to another
 *
 * @dest: the destination location for our string
 * @src: the source location of our string
 *
 * Return: a char pointer
 */

char *_strcpy(char *dest, char *src)
{
	int count;

	for (count = 0; src[count] != '\0'; count++)
	{
		*(dest + count) = *(src + count);
	}
	*(dest + count) = '\0';

	return (dest);
}
