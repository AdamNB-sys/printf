#include "main.h"

/**
 * _printf - prints string to stdout
 * @format: format
 *
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list args;
	int (*func)(va_list args);
	int i = 0;
	int holder = 0;
	char form;

	va_start(args, format);

	while (format[i])
	{
		form = format[i];
		/* if form is a percent */
		if (form == 37)
		{
			i++;
			func = get_function(form);
			if (func != NULL)
			{
				holder += func(&args);
			}
			i++;
		}
		else
		{
			holder += _putchar(form);
		}
		i++;
	}
	va_end(args);
	return (holder);
}
