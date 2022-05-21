#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: The specified format
 * Return: The number of characters that were printed
 */

int _printf(const char *format, ...)
{
va_list ap;
int i = 0, j = 0, int_num = 0;
char *string = NULL;
int char_num = 0;
int (*identifier_check)(va_list);

va_start(ap, format);
while (format[i] != '\0')
{
if (format[i] != '%')
{
_putchar(format[i]);
char_num++;
}
else
{
if (format[i + 1] == '%')
{
i++;
_putchar('%');
char_num++;
}
identifier_check = switch_func(format[i + 1]);
if (identifier_check != NULL)
{
identifier_check(ap);
i++;
char_num++;
}
}
i++;
}
va_end(ap);
return (char_num);
}
