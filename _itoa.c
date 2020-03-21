#include "holberton.h"
#include <stdio.h>
#include <math.h>

int power(int base, int exp);

/**
 * print_number - a function to print any integer using only putchar
 *
 * @n: an int of any size passed from main
 *
 * Return: no return
 */

int print_number(int n)
{
	int num = n;
	int pwr = 0;
	int digits = 0;
	int base = 10;
	int divider;
	int tmp = 0;
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	else if (num < 0)
	{
		_putchar('-');
		count++;
	}

	while (num != 0)
	{
		num /= 10;
		digits++;
	}
	count += digits;

	for (pwr = digits; pwr > 0; pwr--)
	{
		divider = power(base, pwr);
		tmp = (n / divider);
		if (tmp < 0)
			tmp *= -1;
		_putchar(tmp + '0');
		n = (n % divider);
	}
	return (count);
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
