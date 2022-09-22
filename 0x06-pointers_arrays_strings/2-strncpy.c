#include "main.h"

/**
 * _strncpy - function thst copies string including null byte
 * if the lengh of the source string is less than the maximum byte number
 * the remainder of the destination string is fullfilled with nullbytes
 * @dest: buffer storing the string copy
 * @src: the source string
 * @n: max number of byte
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n ; i++)
		dest[i] = '\0';

	return (dest);
}
