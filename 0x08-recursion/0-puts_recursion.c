#include "main.h"

/**
 * puts_recursion - function that prints astring
 * string is followed by a new line
 * @s: string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
