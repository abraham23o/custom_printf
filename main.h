#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_str(char *);
int print_char(char c);
int print_digits(int);
int print_format(char, va_list);
#endif
