#include "main.h"

/**
 * rev_string - reverses a string
 * @str: The string to reverse
 */
void rev_string(char *str)
{
int i = 0;
int j;
char temp;
while (str[i] != '\0')
{
i++;
}
i--;

for (j = 0; j < i; i--, j++)
{
temp = str[j];
str[j] = str[i];
str[i] = temp;
}
}

/**
 * revstr - produces output according to a flag 'R'
 * @ap: The specified string to be reversed
 * Return: 0 for success
 */
int revstr(va_list ap)
{
int i = 0;
char *str = va_arg(ap, char *);
rev_string(str);

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
return (0);
}
