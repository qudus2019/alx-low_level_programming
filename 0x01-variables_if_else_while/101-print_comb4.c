#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	while (i <= 9)
	{
		int j = i + 1;

		while (j <= 9)
		{
			int k = j + 1;

			while (k <= 9)
			{
			putchar(i + '0');
			putchar(j + '0');
			putchar(k + '0');
			putchar(',');
			putchar(' ');
			k++;
			}
			j++;
		}
	i++;
	}

	return (0);
}
