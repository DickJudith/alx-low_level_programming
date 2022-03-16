#include <stdio.h>
/**
 * main - main block
 * Description: program that prints alphabet in lower and upper case
 * Return: 0 (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
