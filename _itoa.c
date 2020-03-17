#include "holberton.h"

int power(int base, int exp);

/**
 * print_number - a function to print any integer using only putchar
 *
 * @n: an int of any size passed from main
 *
 * Return: no return
 */

char* _print_number(int n)
{
	int num = n;
	int pwr = 0;
	int digits = 0;
	int base = 10;
	int divider;
	int tmp = 0;
	char *tmpbuf = malloc(sizeof(char) * 11);
	int counter = 0;

	for (counter = 0; counter < 11; counter++)
	{
		tmpbuf[counter] = '\0';
	}

	counter = 0;

	if (num == 0)
		tmpbuf[0] = '0';
	else if (num < 0)
	{
		tmpbuf[0] = ('-');
		counter++;
	}

	while (num != 0)
	{
		num /= 10;
		digits++;
	}

	for (pwr = digits; pwr > 0; pwr--)
	{
		divider = power(base, pwr);
		tmp = (n / divider);
		if (tmp < 0)
			tmp *= -1;
		tmpbuf[counter] = (tmp + '0');
		n = (n % divider);
		counter++;
	}
	return (tmpbuf);
}

/**
 * power - a function to return the length of a string
 *
 * @base: a base for out exponentiation
 * @exp: out exponent
 *
 * Return: returns an int
 */

int power(int base, int exp)
{
	int i = 1;
	int result = 1;

	for (i = 1; i < exp; i++)
		result *= base;

	return (result);
}
