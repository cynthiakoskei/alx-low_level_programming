#include "main.h"
/**
 * main - starting point
 * Return: 0 if successful
 */
int main(void)
{
	char x[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(x[i]);
	}
	_putchar('\n');
	return (0);
}