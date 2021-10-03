#ifndef main_h
#define main_h

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list ap);
int print_char(va_list s);
int print_percentage(void);
int (*function(const char *format))(va_list);
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
