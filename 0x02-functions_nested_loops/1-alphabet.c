#include "main.h"

/**
 * main - starting point
 * program to print alphabet
 * return: 0 if successful
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
