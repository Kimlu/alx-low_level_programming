#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @seperator: separartor to print between numbers
 * @n: number of numbers to print
 *
 * Reeturn: void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(valist, int);
		printf("%d\n", num);
		if (i < n && seperator)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(valist);
}

