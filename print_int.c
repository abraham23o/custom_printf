#include "main.h"
/**
 * print_digits - print if specifier is d, i, x
 * @base: base to be used to rep. number
 * Return: count of numbers passed
 */
int print_digits((long n, int base)
{
	int count = 0;
	char *symbols = "0123456789abcdef"

	if (n < 0)
	{
		write(1, "-", 1);
		return (print_digits(-n, base) + 1);
	}

	if (n < base)
		return (print_char(symbols[n]));

	else
	{
		count = print_digits(n / base, base);
		return (count + print_digits(n % base, base));
	}
}
