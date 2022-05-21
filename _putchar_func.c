#include "main.h"
/**
 * _putchar_func - prints out a char replacement for
 * the 'c' flag.
 * @ap: a variadic list
 * Return: return the modified print statement
 */


int _putchar_func(va_list ap)
{
char c = va_arg(ap, int);
return (_putchar(c));
}
