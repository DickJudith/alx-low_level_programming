#include <stdio.h>

/**
 * main- program that prints followed by a new line
 * @void: no argument
 * Return: 0 (success)
 */

int main(void)
{
	char ermias[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{_putchar(ermias[c]);
	}
	_putchar('\n');

	return (0);
}
