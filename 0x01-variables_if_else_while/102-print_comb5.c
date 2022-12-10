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
		int j = 0;

		while (j <= 9)
		{
			int k = 0;

			while (k <= 9)
			{
				int l = k + 1;
				while (l <= 9)
				{
			putchar(i + '0');
			putchar(j + '0');
			putchar(' ');
			putchar(k + '0');
			putchar(l + '0');
			putchar(',');
			putchar(' ');
			l++;
				}
			k++;
			}
			j++;
		}
	i++;
	}

	return (0);
}
