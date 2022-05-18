#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _putchar_func(va_list ap);
int _putstr_func(va_list ap);
int _putint_func(va_list ap);
int (*switch_func(char c))(va_list);

#endif /* _MAIN_H_ */
