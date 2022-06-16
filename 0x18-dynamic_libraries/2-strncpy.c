#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: the buffer to copy to
 * @src: the string to copy
 * @n: the maximum number of bytes to copy from src
 *
 * Description: This function copies at most n bytes of the string pointed
 * to by src to the buffer pointed to by dest. If the length of src is less
 * than n, this function will write null bytes until a n bytes are wrtten.
 *
 * Return: a pointer to the destination string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
