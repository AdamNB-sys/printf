#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - prints string to stdout
 * @format: format
 *
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list args;

	int i = 0;
	int holder = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
		/* if index is a percent */
		if (format[i] == 37)
		{
			i++;
			switch (format[i])
			{
				case 'c':
					holder += caseC(va_arg(args, int));
					break;
				case 's':
					holder += caseStr(va_arg(args, char *));
					break;
				case '%':
					holder += casePer();
					break;
			}
		}
		else
		{
			_putchar(format[i]);
			holder++;
		}
		i++;
	}
	va_end(args);
	return (holder);
}
