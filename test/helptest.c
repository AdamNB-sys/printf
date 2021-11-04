#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * caseC - prints characters.
 *
 * @c: char
 *
 * Return: 1 if char, 0 if not.
 */
int caseC(char c)
{
	if (!c)
		return (0);
        write(1, &c, 1);
	return (1);
}

/**
 * caseStr - prints a string
 *
 * @sp: the list of arguments passed.
 *
 * Return: string.
 */

int caseStr(char *sp)
{
	int i;
	for (i = 0; sp[i] != '\0'; i++)
	{
		write(1, &sp[i], 1);
	}
	write(1, '\0', 1);

	return (i);
}

/**
 * casePer - prints percent
 *
 *
 * Return: int
 */
int casePer(void)
{
	_putchar('%');
	return (1);
}

/**
 * caseUnknown - prints unknown
 * @a: argument
 *
 * Return: int
 */
char caseUnknown(char a)
{
	_putchar('%');
	_putchar(a);
	return(2);
}

/**
 * caseInt - prints integer
 *
 * Return: int
 */
/* int caseInt(int n)
{

} */
