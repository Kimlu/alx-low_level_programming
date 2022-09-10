#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char miss, e, q;

	e = 'e';
	q = 'q';

	for (miss = 'a'; miss <= 'z'; miss++)
	{
		if (miss != e && miss != q)
			putchar(miss);
	}
	putchar('\n');

	return (0);
}
