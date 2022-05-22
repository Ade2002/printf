# Printf Function for C
chmod u+x string-fields.c && git add --chmod=+x string-fields.c && git commit -m 'string-fields.c' && git push
git add . && git commit -m 'created readme'
A partial rebuild of the standard *printf* function in C.

---

## Description

> A function similar to the stdio printf function in C library. A task from ALX Software Engineering Training.
>It contains some of the basic features and functions found in the man 3 printf.
>_printf() is a function that performs formatted output conversion and prints data. Its prototype is the following:

+ int _printf(const char *format, ...)

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
| p  | Pointer address  |
| r  | Reverse string of characters |
| R  | ROT13 translation of string |
| S  | String with special chars replaced by their ASCII value  |
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

5. Printing a hexadecimal:
    + Use: `_printf("10 in Hexadecimal:[%X]\n", 10); OR _printf("10 in Hexadecimal:[%v]\n", 10);`
    + Output: `10 in Hexadecimal:[A] OR 10 in Hexadecimal:[a]`

6. Printing a string codified in ROT13:
    + Use: `_printf("Hello in ROT13 is %R", "Hello");`
    + Output: `Hello in ROT13 is Urybb`

7. Printing a reversed string:
    + Use: `_printf("Hello in reversed format is %r\n", "Hello");`
    + Output: `Hello in reversed format is olleH`

## Compilation

---
> gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c


---

## File Functions

### _printf.c

>Our own printf function that performs formatted output conversion and prints data to display.

### _puts.c

>Function That Prints strings and characters to the screen.

### conver_number.c

>Function That processes the Hexadecimal, octal, binary conversions.

### man_3_printf

>Manual Page

### main.h

>Header File Where All Prototypes Are Saved.

### numbers.c

>Function That Specifies all the supported functions/flags.

### params.c

>Functions that clears struct fields and reset buffer.

### print_functions.c

>Functions That handles the print functions of char, strings, int, hex, oct.

### print_number.c

>Functions that carry out number print based on different options.

### simple_printers.c

>Functions that process address, ROT13, and reverse string printing

### string_fields.c

>Functions that processes the precision from the format string

### specifier.c

>Functions that process the user input flags/identifiers. Samples Seen below:

``` c
/* Indetifier : %c or %i or %d or %s or %o or %x or %X or %r or %R or %b or %u */
```

---

## Issues

> Report issues/bug here: [Issues](https://github.com/Ade2002/printf/issues)

---

## Contributors

+ **Olufolabi Otitoola** - [oolufolabii](github.com/oolufolabii/)
+ **Ademola Sikiru** - [ade2002](https://github.com/Ade2002/)
