#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: the string to append to
 * @src: the string to append
 * @n: the maximum number of bytes to append from src
 *
 * Description: This function appends the string pointed to by src to the
 * string pointed to by dest, overwriting the null byte at the end of dest,
 * and then adding a terminating null byte, using most n bytes from src.
 *
 * Return: a pointer to the destination string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
