#include "main.h"
/**
 * _printf - print anything
 * @format: string to be printed
 * Return: the number of characters printed (excluding the null
 * byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int count = 0;

	va_start(ap, format);

	while (*format != '\0')
	{
		if (*format == '%')
			count += print_format(*(++format), ap);
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return (count);
}
