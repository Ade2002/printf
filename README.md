# Printf Function for C
chmod u+x num_funct_1.c && git add --chmod=+x num_funct_1.c && git commit -m 'num_funct_1.c num_funct_1.c' && git push
git add . && git commit -m 'created readme'
---

## Description

> A function similar to the stdio printf function in C library. A task from ALX Software Engineering Training.
>It contains some of the basic features and functions found in the man 3 printf.
>_printf() is a function that performs formatted output conversion and prints data. Its prototype is the following:

    int _printf(const char *format, ...)

>Where **format** contains the string that is printed. As _printf() is variadic function, it can receives n arguments that replace by n tags written inside the string.

| Specifier | Output |
| ------------- | ------------- |
| c  | Character  |
| d or i | Signed decimal integer |
| s  | String of characters  |
| b  | Signed binary  |
| o  | Signed octal  |
| u  | Unsigned integer  |
| x  | Unsigned hexadecimal  |
| X  | Unsigned hexadecimal (uppercase)  |
| %  | Character  |

---

| Flags | Description | Specifiers |
| ------------- | ------------- | ------------- |
| +/-  | Prints a plus sign (+) when the argument is a positive number. In other case, prints a minus sign (-). | i, d |
| (space) | Prints a blank space if the argument is a positive number | i, d |

---

## Examples

1. Printing a single char "A":
    + Use: `_printf("%s student", "A");`

    + Output: `A student`

2. Printing the string of chars "Hello, World":
    + Use: `_printf("Hello, %s", "World");`

    + Output: `Hello World`

3. Printing an integer number:
    + Use: `_printf("A perfect number like %d.", 7);`

    + Output: `A perfect number like 7.`

4. Printing a binary and octal:

    + Use: `_printf("10 in binary is %b, in octal is %o\n", 10, 10);`

    + Output: `10 in binary is 1010, in octal is 12`

## Compilation

---
> gcc -Wall -Werror -Wextra -pedantic *.c

---

## File Functions

### _printf.c

+ >Our own printf function that performs formatted output conversion and prints data to display.

### _putchar.c

+ >Function That Prints to the screen.

### print_number.c

+ >Function That Prints integers.

### man_3_printf

+ >Manual Page

### main.h

+ >Header File Where All Prototypes Are Saved.

### _putbin_func.c

+ >Function That Prints A Binary formatted output

```c
/* Indetifier : %b */
```

### _putchar_func.c

+ >Function That Prints A character formatted output

``` c
/* Indetifier : %c */
```

### _putint_func.c

+ >Function That Prints An Integer.

```c
 /* Indetifier : %i or %d */
```

### _putoct_func.c

+ >Function That Prints A Number In Octal.

```c
/* Indetifier : %o */
```

### _putstr_func.c

Function That Writes The String To Stdout.

```c
/* Indetifier : %s */
```

### _puthexL_func
Function That Prints Decimal In Hexadecimal in lower case.
```c
/* Indetifier : %x */
```

### _puthexU_func
Function That Prints Decimal In Hexadecimal in upper case.
```c
/* Indetifier : %x */
```

## Contributors

+ **Olufolabi** - [oolufolabii](github.com/oolufolabii/)
+ **Ademola** - [ade2002](https://github.com/Ade2002/)
