#include "main.h"

int _putchar_func(va_list ap)
{
    char c = va_arg(ap, int);
    return (_putchar(c));
}
