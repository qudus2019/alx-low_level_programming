#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	putchar('0');
	int i = 1;

	while (i <= 9) 
	{
	putchar(i + '0');
	i++;
	}
	putchar('\n');

	return (0);
}

