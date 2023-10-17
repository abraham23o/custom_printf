#include "main.h"
/**
 * print_str - print string passed
 * @str: string to be printed
 * Return: count of chars in string
 */
int print_str(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		write(1, str, 1);
		++count;
		++str;
	}
	return (count);
}
