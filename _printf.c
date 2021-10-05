#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Description: this function will call the get_print() function that will
 * determine which printing function to call depending on the conversion
 * specifiers contained into fmt
 * Return: length of the formatted output string
 */
int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, flags_t *);
	const char *p;
	va_list arguments;
	flags_t flags = {0, 0, 0};

<<<<<<< HEAD
va_start(arguments, format);
buffer = malloc(sizeof(char) * 1024);
while (format && format[i])
{
if (format[i] == '%')
{
if (format[i + 1] == '%')
handl_buf(buffer, format[i], ibuf), len++;
else if (format[i + 1] == '\0')
{
if (ibuf != 0)
print_buf(buffer, ibuf);
free(buffer);
return (-1);
}
else
{
function = get_print_func(format, i + 1);
len += function(arguments, buffer, ibuf);
}
i++;
}
else
handl_buf(buffer, format[i], ibuf), len++;
i++, ibuf = len;
while (ibuf > 1024)
ibuf -= 1024;
}
print_buf(buffer, ibuf), free(buffer), va_end(arguments);
return (len);
=======
	register int count = 0;

	va_start(arguments, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_flag(*p, &flags))
				p++;
			pfunc = get_print(*p);
			count += (pfunc)
				? pfunc(arguments, &flags)
				: _printf("%%%c", *p);
		} else
			count += _putchar(*p);
	}
	_putchar(-1);
	va_end(arguments);
	return (count);
>>>>>>> 3c8bcd6ef6019c1945727a78a77ef8d00a228d1f
}
