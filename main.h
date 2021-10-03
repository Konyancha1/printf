#ifndef main_h
#include main_h

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list ap);
int print_char(va_list s);
int print_percentage(void);
/**
 * struct code_format - Struct format
 *
 * @sc: The specifiers
 * @f: The function associated
 */
typedef struct code_format
{
  char *sc;
  int (*f)(va_list);
} code_f;

#endif
