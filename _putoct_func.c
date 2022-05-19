#include "main.h"

/**
 * int_to_oct: converts a decimal to octal
 * @decimalnum: decimal value to be converted
 * Return: return octal value
 */

int int_to_oct(int decimalnum)
{
    int octnum = 0, val = 1;

    while (decimalnum != 0)
    {
    	octnum += (decimalnum % 8) * val;
    	decimalnum = decimalnum / 8;
        val *= 10;
    }

    return octnum;
}

/**
 * _putoct_func: prints out an octal conversion for
 * the 'o' flag.
 * @ap: a variadic list
 * Return: return 0 on success
 */

int _putoct_func(va_list ap)
{
    int int_num = va_arg(ap, unsigned int);
    int j = int_to_oct(int_num);
    print_number(j);
}