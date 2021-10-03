#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_char - writes the character c to stdour
 * @s: The character to print
 * 
 * Return: 1
 */
int print_char(va_list s)
{
unsigned char a;

 a = va_arg(s, int);
 _putchar(a);
 return(1);
}
/**
 * print_percentage - %
 * 
 * Return: 1
 */
int print_percentage(void)
{
_putchar('%');
return (1);
}
