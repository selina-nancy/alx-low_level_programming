#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Description - prints the alphabet in lower case
 * Return: void
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
