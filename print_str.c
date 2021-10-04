#include "main.h"
/**
 * print_str - writes the string to stdout
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: On success 1.
 */
int print_str(va_list argumernts, char *buf, unsigned int ibuf)
{
char *str;
unsigned int i = 0;
char nill[] = "(nil)";

str = va_arg(arguments, char *);
if (str == NULL)
{
for (i = 0; nill[i]; i++)
ibuf = handl_buf(buf, nill[i], ibuf);
return (5);
}
for (i = 0; str[i]; i++)
ibuf = handl_buf(buf, str[i], ibuf);
return(i);
}
