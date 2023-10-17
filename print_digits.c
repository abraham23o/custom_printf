#include "main.h"
/**
 * print_digits - print if specifier is d, i, x
 * @num: number to be printed
 * Return: count of numbers passed
 */
int print_digits(int num)
{
	char buffer[10];
	int i = 0, j;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num == 0)
		_putchar('0');

	while (num > 0)
	{
		buffer[i] = '0' + num % 10;
		num /= 10;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
		_putchar(buffer[j]);

	return (i);
}
