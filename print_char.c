#include "main.h"
/**
 * print_char - prints characters
 * @c: character to be printed
 * Return: count of characters passed
 */
int print_char(char c)
{
	return (write(1, &c, 1));
}
