#include "main.h"
/**
 * int_to_hex_lower - convert an int to lower hex
 * @n: a number
 * Return: 0 for success
 */

int int_to_hex_lower(int n)
{
char hexaDeciNum[100];
int i = 0, j;
while (n != 0)
{
int temp = 0;
temp = n % 16;

if (temp < 10)
{
hexaDeciNum[i] = temp + 48;
i++;
}
else
{
hexaDeciNum[i] = temp + 87;
i++;
}

n = n / 16;
}
for (j = i - 1; j >= 0; j--)
_putchar(hexaDeciNum[j]);

return (0);
}

/**
 * _puthexL_func - prints out the lower case
 * hex value from an integer conversion
 * @ap: a variadic list
 * Return: return 0 upon success
 */

int _puthexL_func(va_list ap)
{
int int_num = va_arg(ap, unsigned int);
int_to_hex_lower(int_num);
return (0);
}
