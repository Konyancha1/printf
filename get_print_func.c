#include "main.h"
/**
 * get_print_func - selects the correct function to perform the operation.
 * @s: argument indentifier
 * @index: index for argument indentifier
 * Return: pointer to a function.
 */
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int)
{
print_t pr[] = {
{"c", print_chr},
{"s", print_str},
{"%", print_prg},
{NULL, NULL},
};
int i = 0;

while (pr[i].sc)
{
if (s[index] == pr[i].sc[0])
break;
i++;
}
return (pr[i].f);
}
