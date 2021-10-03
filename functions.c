#include "main.h"
/**
 * function - function that finds formats for _printf
 * calls the corresponding fi=unction
 * @format: format(char, string, int, decimal)
 * Return: NULL or function associated ;
 */
int (*function(const char *format))(va_list)
{
  unsigned int i = 0;
  code_f find_f[] = {
		     {"c", print_char},
		     {"s", print_string},
		     {"%", print_char}
		     {NULL, NULL}
  };
  while (find_f[i].sc)
    {
      if (find_f[i].sc[0] == (*format))
	return (find_f[i].f);
      i++;
    }
  return (NULL);
}
