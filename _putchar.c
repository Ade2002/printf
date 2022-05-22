#include "main.h"

/**
 * _putchar - writes the character c to the buffer
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write_buffer(c, 0));
}
