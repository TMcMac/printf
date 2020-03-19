#include "holberton.h"

char *formattype(char a, va_list ap);

/**
 * _printf - a homemade version of the classic printf function
 * a variadic C function to print type specified data and strings.
 * @format: a format specifier
 * Return: -1 for fails or the char count for success.
 */

int _printf(const char *format, ...)
{
	int iptcnt = 0, bufcnt = 0, tmpnum = 0;
	char buffer[1024];
	char *tmp = NULL;
	va_list ap;

	va_start(ap, format);

	if (format == NULL)
	{
		return (-1);
	}
	while (format[iptcnt])
	{
		if (format[iptcnt] == '%') /* if I hit a percent */
		{
			iptcnt++; /* Advance to the next char*/
			if (format[iptcnt] == '\0')
			{
				return (-1); /* If there isnt one, then error*/
			}
			else if (format[iptcnt] == '%')
			{
				buffer[bufcnt] = '%'; /* If there is another % */
			} /* then add it to buffer and move on */
			else
			{
				tmp = formattype(format[iptcnt], ap); /* If it's a char we need to type*/
				if (tmp == NULL) /*check it and I am expecting to get back a pointer*/
					return (-1); /*to a string.*/
				tmpnum = _strncat((buffer + bufcnt), tmp);
				bufcnt += tmpnum;
				tmp = NULL; /* After the whole new string is added I'll */
			} /* need to zero our tmp and tmpcnt so they are ready for the next round */
		}
		else
		{
			buffer[bufcnt] = format[iptcnt]; /* If it's just a char no % just copy*/
		} /* it into the buffer */
		bufcnt++;
		iptcnt++;
	}
	write(1, buffer, bufcnt); /* In the end we want to print*/
	va_end(ap); /*the buffer to stdout*/
	return (bufcnt); /* This should return our char count*/
} /*as it is the buffer positions used*/

/**
 * formattype - match the char passed from _printf to type_dict and
 * then send the arg to the proper function and get back a string.
 * @a: a char from _printf for matching
 * @ap: are argument list var
 * Return: we should get a string back from our print fuctions
 * and we return a pointer to that string so our else while loop in
 * _printf can append it to the buffer.
 */

char *formattype(char a, va_list ap) /* Take in a char to match return a ptr*/
{ /* to a string */
	int i = 0;
	char *ptr;

	pt type_dict[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_int},
		{'\0', NULL}
	};

	while (type_dict[i].type) /* Search through type_dict for a char match  */
	{
		if (a == type_dict[i].type)
		{ /* If we get a match we are sending the arg to a matching function */
			ptr = type_dict[i].f(ap);
			if (ptr == NULL)
				return (NULL);
			return (ptr); /* We should get back a pointer to a string */
		} /* which we'll send to _strncat back in _printf */
		i++;
	}
	return (NULL);
}
