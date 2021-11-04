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
			switch(form)
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
			_putchar(form);
			holder++;
		}
		i++;
	}
	va_end(args);
	return (holder);
}
