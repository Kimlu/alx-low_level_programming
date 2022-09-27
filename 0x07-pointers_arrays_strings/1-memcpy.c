#include "main.h"

/*_memcpy -copies memory from one address to another
 * @dest: memory copied to
 * @src: memory copied from
 * @n: number of bytes to be copied
 *
 * Return: pointer to copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int n = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
