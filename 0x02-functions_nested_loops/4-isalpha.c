#include "main.h"
/**
 * _isalpha - function to check nif c is a letter, lowercase or uppercase
 * @c: is the intthat we will use for the argument of the function
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
