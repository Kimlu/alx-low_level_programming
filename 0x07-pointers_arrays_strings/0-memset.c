#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * @s: address of memory block to be used
 * @b: character to be used
 * @n: bytes of memory
 *
 * Return: pointer to memory block
 */

char *_memset(char *s, char b, unsigned int n);
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
