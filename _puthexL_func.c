#include "main.h"
/**
 * int_to_hex_lower - convert an int to lower hex
 * @n: a number
 * Return: 0 for success 
 */

int int_to_hex_lower(int n)
{
    char hexaDeciNum[100];
    // _putchar('0');
    // _putchar('x');
    // counter for hexadecimal number array
    int i = 0;
    while (n != 0)
    {
        // temporary variable to store remainder
        int temp = 0;

        // storing remainder in temp variable.
        temp = n % 16;

        // check if temp < 10
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
    for (int j = i - 1; j >= 0; j--)
        _putchar(hexaDeciNum[j]);
   
   return (0);
}

/**
 * _puthexL_func: prints out the lower case
 * hex value from an integer conversion
 * @ap: a variadic list
 * Return: return 0 upon success
 */

int _puthexL_func(va_list ap)
{
    int int_num = va_arg(ap, unsigned int);
    int num = int_to_hex_lower(int_num);
}
