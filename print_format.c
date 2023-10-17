#include "main.h"
/**
 * print_format - check specifier and assign correct function
 * @specifier: format string specifier
 * @ap: argument pointer
 * Return: count
 */
int print_format(char specifier, va_list ap)
{
	int count = 0;

	if (specifier == 'c')
		count += print_char(va_arg(ap, int));

	else if (specifier == 's')
		count += print_str(va_arg(ap, char *));

	else if (specifier == 'd' || specifier == 'i')
		count += print_digits(va_arg(ap, int));

	else
		count += write(1, &specifier, 1);

	return (count);
}
