#include "../main.h"

int main(void)
{
    
    _printf("Hello in reversed format is %r\n", "Hello");
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("String:[%X]\n", 200);
    printf("String:[%X]\n", 200);
    _printf("10 in Hexadecimal:[%X]\n", 10);
    printf("10 in Hexadecimal:[%X]\n", 10);
    
}