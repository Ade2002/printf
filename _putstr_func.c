#include "main.h"

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
