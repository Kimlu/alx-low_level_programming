#include <stdio.h>

/**
 * main - prints the name of arguments passed to it
 * @argc: nnumber of arguments passed to the functionn
 * @argv: argument vector of pointers to strings
 *
 * Return: always 0
 */
int main(int argc, char *argvn[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
