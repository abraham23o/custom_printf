#include "main.h"
/**
 * _printf - user-defined printf
 * @format: a char string
 * Return: number of characters printed excluding null char used
 * to end strings
 */
int _printf(const char *format, ...)
{
	int x = 0, i = 0, count;
	char ch, *str;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == '%')
			{
				write(1, format, 1);
				count++;
			}
			else if (*format == 'c')
			{
				ch = va_arg(args, int);
				write(1, &ch, 1);
				count++;
			}
			else if (*format == 's')
			{
				str = va_arg(args, char *);

				while (str[i] != '\0')
					i++;

				write(1, str, i);
				count += i;
			}
			else if (*format == 'd')
			{
				x = va_arg(args, int);
				count++;
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}
