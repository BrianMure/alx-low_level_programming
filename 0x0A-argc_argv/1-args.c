#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: array that contains program line arguments
 * Return: success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
