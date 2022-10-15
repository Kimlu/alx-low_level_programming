#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>

type struct print
{
	char *t;
	void (*f)(va_list);
} print_t;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separartor, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /*_VARIADIC_FUNCTIONS_H_*/
