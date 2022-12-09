#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j = 0;

	while (j <= 9)
	{
		putchar(j + '0');
		if (j != 9)
		{
			putchar(',');
			putchar(' ');
		}else
		{
			putchar(' ');
		}
		j++;
	}
	return (0);
}
