#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct bag - grab bag of functions for printf
 * @choice: specifier of function
 * @func: the function to return
 */

/** typedef struct bag
{
	char *choice;
	int (*func)(va_list args);
} grabbag;
*/

int _printf(const char *format, ...);
int _putchar(char c);
int casePer(void);
int caseStr(char *sp);
int caseC(char c);


#endif /* MAIN_H */
