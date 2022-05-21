#include "main.h"

/**
 * switch_func - specifies action for corresponding flag
 * @c: Input flag
 * Return: The corresponding action for input flag
 */

int (*switch_func(char c))(va_list)
{
if (c == 'c')
return (_putchar_func);

if (c == 's')
return (_putstr_func);
if (c == 'd')
return (_putint_func);
if (c == 'i')
return (_putint_func);
if (c == 'b')
return (_putbin_func);
if (c == 'o')
return (_putoct_func);
if (c == 'x')
return (_puthexL_func);
if (c == 'X')
return (_puthexU_func);
return (NULL);
}
