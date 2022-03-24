#include "main.h"

/**
 * _strncat - function that concanates two strings
 * @dest: character to be changed
 * @src: character to be changed
 * @n: value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x,y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}

	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}

	dest[x] = '\0';

	return (dest);
}
