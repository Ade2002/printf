#include "main.h"
/**
 * _putint_func - prints out an int replacement for
 * the 'd' or 'i' flag.
 * @ap: a variadic list
 * Return: return 0 on success
 */


int _putint_func(va_list ap)
{
int int_num = va_arg(ap, int);

print_number(int_num);

return (0);
}
