#include "main.h"
/**
 * int_to_bin -  converts an integer to binary
 * @num: integer to be converted
 * Return: return the converted binary result
 */


int int_to_bin(int num)
{
if (num < 2)
return (num);

return (int_to_bin(num / 2) * 10 + num % 2);
}

/**
 * _putbin_func - prints out the binary output
 * @ap: a variadic list
 * Return: return 0 on success
 */

int _putbin_func(va_list ap)
{
int int_num = va_arg(ap, unsigned int);
int j = int_to_bin(int_num);
print_number(j);
return (0);
}
