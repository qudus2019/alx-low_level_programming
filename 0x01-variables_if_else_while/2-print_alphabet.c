#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lett = 'a';

	while (lett <= 'z')
	{
		putchar(lett);
		lett++;
	}
	putchar("\n");
}
