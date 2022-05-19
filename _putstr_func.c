#include "main.h"

/**
 * _putstr_func: prints out a string replacement for
 * the 's' flag.
 * @ap: a variadic list
 * Return: return 0 on success
 */

int _putstr_func(va_list ap)
{
    int i = 0;
    char *str = va_arg(ap, char *);

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
    return (0);
}
