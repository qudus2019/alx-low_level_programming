#include <stdio.h>
/**
 * main -entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}

