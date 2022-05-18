#include "main.h"

int (*switch_func(char c))(va_list)
{
    if (c == 'c')
        return (_putchar_func);

    if (c == 's')
        return (_putstr_func);
    if (c == 'd')
        return (_putint_func);

    return (NULL);
}